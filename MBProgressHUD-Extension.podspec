Pod::Spec.new do |s|
  s.name     = 'MBProgressHUD-Extension'
  s.version  = '1.0.0'
  s.license  = 'MIT'
  s.summary  = 'Easy way to use MBProgressHUD'
  s.homepage = 'git@github.com:zzyspace/MBProgressHUD-Extension.git'
  s.source   = { :git => 'git@github.com:zzyspace/MBProgressHUD-Extension.git', :tag => "#{s.version}" }
  s.authors = { 'Ryan' => '551854173@qq.com' }
  s.platform = :ios, '8.0'
  s.frameworks = 'Foundation'
  s.dependency 'MBProgressHUD', '~> 1.0.0'
end
