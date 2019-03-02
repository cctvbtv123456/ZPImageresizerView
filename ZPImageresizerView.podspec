Pod::Spec.new do |s|
  s.name         = "ZPImageresizerView"
  s.version      = "1.0.3"
  s.summary      = "A short description of ZPImageresizerView."
  s.description  = "该SDK是一个截图功能，方便快捷，使用起来很爽"  #描述
  s.homepage     = "https://github.com/cctvbtv123456/ZPImageresizerView"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author             = { "Justin" => "1272524311@qq.com" }
  s.platform     = :ios, "9.0"
  s.source       = { :git => "https://github.com/cctvbtv123456/ZPImageresizerView.git", :tag => "1.0.3" }
  s.source_files  = "Classes", "ZPImageresizerView/ZPImageresizerView/**/*.{h,m}"
  s.requires_arc = true
  # s.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
  # s.dependency "JSONKit", "~> 1.4"
end
