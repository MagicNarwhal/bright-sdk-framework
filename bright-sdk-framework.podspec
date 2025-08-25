Pod::Spec.new do |s|
    s.name         = "bright-sdk-frameworks"
    s.version      = "1.561.203"
    s.summary      = "Bright SDK service framework v#{s.version}"
    s.description  = "Pod version for Bright SDK framework v#{s.version}."
    s.homepage     = "https://help.bright-sdk.com/hc/en-us/articles/16675528708369-iOS-tvOS-SDK-Integration-Guide#h_01H4DP1Z2W4E8ABGPJ0FKDRY17"
    s.license = { :type => 'MIT' }
    s.author = { "Alexey C." => "alexey@talkme.im" }
    s.source = { :git => "https://github.com/MagicNarwhal/bright-sdk-framework.git", :tag => "#{s.version}" }
    s.vendored_frameworks = "#{s.version}/brdsdk.xcframework"
    s.platform = :ios
    s.ios.deployment_target  = '13.0'
end
