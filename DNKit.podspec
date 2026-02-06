Pod::Spec.new do |s|
  s.name             = 'DNKit'
  s.version          = '1.2.4'
  s.summary          = 'A liveness detection kit'
  s.description      = <<-DESC
  DNKit is a liveness detection framework for iOS applications.
  It provides face liveness detection capabilities.
                       DESC
  
  s.homepage         = 'https://github.com/cayplayer/DNKit'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'cayplayer' => '' }
  s.source           = { 
    :git => 'https://github.com/cayplayer/DNKit.git', 
    :tag => s.version.to_s 
  }
  s.ios.deployment_target = '14.0'
  s.requires_arc = true
  s.vendored_frameworks = [
    'DNLivenessKit.xcframework',
    'DNLivenessDetector.xcframework'
  ]
  
  # 如果需要，指定支持的架构
  s.pod_target_xcconfig = {
    'VALID_ARCHS' => 'arm64 armv7 x86_64'
  }
end