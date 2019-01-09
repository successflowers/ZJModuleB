
Pod::Spec.new do |s|


  s.name         = "ZJModuleB"
  s.version      = "1.0"
  s.summary      = "验证组件化"
s.description  = <<-DESC
                    各种样式的uicollectionview，功能持续更新中...
                   DESC
  s.homepage     = "https://github.com/successflowers/ZJModuleB"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author             = { "张敬" => "success_flower@sina.com" }
  s.platform     = :ios, "9.0"
  s.source       = { :git => "https://github.com/successflowers/ZJModuleB.git",:tag => s.version}
  s.requires_arc = true
end
