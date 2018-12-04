#
# Be sure to run `pod lib lint UCSIM.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'UCSIM'
  s.version          = '0.1.0'
  s.summary          = 'UCSIM - iOS SDK'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/zzenjolras/UCSIM-iOS'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'zzenjolras' => 'gyzios@163.com' }
  s.source           = { :git => 'https://github.com/zzenjolras/UCSIM-iOS.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'

  s.source_files = 'UCSIM/Classes/**/*'
  
  # s.resource_bundles = {
  #   'UCSIM' => ['UCSIM/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  
  s.pod_target_xcconfig = { 'OTHER_LDFLAGS' => '-ObjC' }
  s.xcconfig = { 'ENABLE_BITCODE' => 'No' }
  
   s.frameworks = 'UIKit', 'SystemConfiguration', 'AVFoundation', 'CoreMedia', 'Foundation', 'MessageUI', 'CoreFoundation', 'MobileCoreServices', 'CFNetwork', 'AudioToolbox', 'AddressBookUI', 'AssetsLibrary', 'CoreAudio', 'VideoToolbox', 'CoreTelephony'

   s.libraries = 'c++', 'z.1.1.3', 'sqlite3.0', 'icucore', 'resolv'
   
   s.vendored_libraries = 'UCSIM/Classes/UCS_IMSDK/libucsimlib.a', 'UCSIM/Classes/UCS_TCPSDK/libucstcplib.a', 'UCSIM/Classes/UCS_VOIPSDK/libucsvideosdk.a'
   
   s.dependency 'AliyunOSSiOS'
end
