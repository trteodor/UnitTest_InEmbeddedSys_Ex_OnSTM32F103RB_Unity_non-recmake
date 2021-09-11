#Do not modify this file until you dk what you are doing :) 
require "#{ENV['CMOCK_DIR']}/lib/cmock"

raise 'Header file to mock must be specified!' unless ARGV.length >= 1

mock_out = ENV.fetch('MOCK_OUT', './build/UnitTests/cmock')
mock_prefix = ENV.fetch('MOCK_PREFIX', 'mock_')
cmock = CMock.new(:plugins => %i[ignore return_thru_ptr], :mock_prefix => mock_prefix, :mock_path => mock_out)
cmock.setup_mocks(ARGV[0])