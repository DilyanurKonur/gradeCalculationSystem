﻿<Project xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
    <PropertyGroup>
        <ProjectGuid>{B46F9BC0-4F8F-4E8E-B461-68F815C92847}</ProjectGuid>
        <ProjectVersion>20.1</ProjectVersion>
        <FrameworkType>None</FrameworkType>
        <Base>True</Base>
        <Config Condition="'$(Config)'==''">Debug</Config>
        <Platform Condition="'$(Platform)'==''">Win32</Platform>
        <ProjectName Condition="'$(ProjectName)'==''">Öğrenci Not Hesaplama Sistemi</ProjectName>
        <TargetedPlatforms>1</TargetedPlatforms>
        <AppType>Console</AppType>
    </PropertyGroup>
    <PropertyGroup Condition="'$(Config)'=='Base' or '$(Base)'!=''">
        <Base>true</Base>
    </PropertyGroup>
    <PropertyGroup Condition="('$(Platform)'=='Win32' and '$(Base)'=='true') or '$(Base_Win32)'!=''">
        <Base_Win32>true</Base_Win32>
        <CfgParent>Base</CfgParent>
        <Base>true</Base>
    </PropertyGroup>
    <PropertyGroup Condition="'$(Config)'=='Debug' or '$(Cfg_1)'!=''">
        <Cfg_1>true</Cfg_1>
        <CfgParent>Base</CfgParent>
        <Base>true</Base>
    </PropertyGroup>
    <PropertyGroup Condition="('$(Platform)'=='Win32' and '$(Cfg_1)'=='true') or '$(Cfg_1_Win32)'!=''">
        <Cfg_1_Win32>true</Cfg_1_Win32>
        <CfgParent>Cfg_1</CfgParent>
        <Cfg_1>true</Cfg_1>
        <Base>true</Base>
    </PropertyGroup>
    <PropertyGroup Condition="'$(Config)'=='Release' or '$(Cfg_2)'!=''">
        <Cfg_2>true</Cfg_2>
        <CfgParent>Base</CfgParent>
        <Base>true</Base>
    </PropertyGroup>
    <PropertyGroup Condition="('$(Platform)'=='Win32' and '$(Cfg_2)'=='true') or '$(Cfg_2_Win32)'!=''">
        <Cfg_2_Win32>true</Cfg_2_Win32>
        <CfgParent>Cfg_2</CfgParent>
        <Cfg_2>true</Cfg_2>
        <Base>true</Base>
    </PropertyGroup>
    <PropertyGroup Condition="'$(Base)'!=''">
        <DCC_CBuilderOutput>JPHNE</DCC_CBuilderOutput>
        <IntermediateOutputDir>.\$(Platform)\$(Config)</IntermediateOutputDir>
        <FinalOutputDir>.\$(Platform)\$(Config)</FinalOutputDir>
        <BCC_wpar>false</BCC_wpar>
        <BCC_OptimizeForSpeed>true</BCC_OptimizeForSpeed>
        <BCC_ExtendedErrorInfo>true</BCC_ExtendedErrorInfo>
        <ILINK_TranslatedLibraryPath>$(BDSLIB)\$(PLATFORM)\release\$(LANGDIR);$(ILINK_TranslatedLibraryPath)</ILINK_TranslatedLibraryPath>
        <ProjectType>CppConsoleApplication</ProjectType>
        <DCC_Namespace>System;Xml;Data;Datasnap;Web;Soap;$(DCC_Namespace)</DCC_Namespace>
        <Multithreaded>true</Multithreaded>
        <SanitizedProjectName>Öğrenci_Not_Hesaplama_Sistemi</SanitizedProjectName>
        <_TCHARMapping>char</_TCHARMapping>
    </PropertyGroup>
    <PropertyGroup Condition="'$(Base_Win32)'!=''">
        <PackageImports>adortl;appanalytics;bcbie;bcbsmp;bindcomp;bindcompdbx;bindcompfmx;bindcompvcl;bindcompvclsmp;bindcompvclwinx;bindengine;CloudService;CustomIPTransport;dbexpress;dbrtl;dbxcds;DbxClientDriver;DbxCommonDriver;DBXInterBaseDriver;DBXMySQLDriver;DBXSqliteDriver;dsnap;dsnapcon;dsnapxml;FireDAC;FireDACADSDriver;FireDACCommon;FireDACCommonDriver;FireDACCommonODBC;FireDACIBDriver;FireDACMSAccDriver;FireDACMySQLDriver;FireDACPgDriver;FireDACSqliteDriver;fmx;fmxase;fmxdae;fmxFireDAC;fmxobj;IndyCore;IndyIPClient;IndyIPCommon;IndyIPServer;IndyProtocols;IndySystem;inet;inetdb;inetdbxpress;RESTBackendComponents;RESTComponents;rtl;Skia;soapmidas;soaprtl;soapserver;tethering;vcl;vclactnband;vcldb;vcldsnap;vcledge;vclFireDAC;vclie;vclimg;VCLRESTComponents;VclSmp;vcltouch;vclwinx;vclx;xmlrtl;$(PackageImports)</PackageImports>
        <DCC_Namespace>Winapi;System.Win;Data.Win;Datasnap.Win;Web.Win;Soap.Win;Xml.Win;Bde;$(DCC_Namespace)</DCC_Namespace>
        <BT_BuildType>Debug</BT_BuildType>
        <VerInfo_Keys>CompanyName=;FileDescription=$(MSBuildProjectName);FileVersion=1.0.0.0;InternalName=;LegalCopyright=;LegalTrademarks=;OriginalFilename=;ProgramID=com.embarcadero.$(MSBuildProjectName);ProductName=$(MSBuildProjectName);ProductVersion=1.0.0.0;Comments=</VerInfo_Keys>
        <VerInfo_Locale>1033</VerInfo_Locale>
        <UWP_CppLogo44>$(BDS)\bin\Artwork\Windows\UWP\cppreg_UwpDefault_44.png</UWP_CppLogo44>
        <UWP_CppLogo150>$(BDS)\bin\Artwork\Windows\UWP\cppreg_UwpDefault_150.png</UWP_CppLogo150>
        <BCC_PCHName_Clang>Öğrenci Not Hesaplama SistemiPCH1.h</BCC_PCHName_Clang>
    </PropertyGroup>
    <PropertyGroup Condition="'$(Cfg_1)'!=''">
        <BCC_OptimizeForSpeed>false</BCC_OptimizeForSpeed>
        <BCC_DisableOptimizations>true</BCC_DisableOptimizations>
        <DCC_Optimize>false</DCC_Optimize>
        <DCC_DebugInfoInExe>true</DCC_DebugInfoInExe>
        <Defines>_DEBUG;$(Defines)</Defines>
        <BCC_InlineFunctionExpansion>false</BCC_InlineFunctionExpansion>
        <BCC_UseRegisterVariables>None</BCC_UseRegisterVariables>
        <DCC_Define>DEBUG</DCC_Define>
        <BCC_DebugLineNumbers>true</BCC_DebugLineNumbers>
        <TASM_DisplaySourceLines>true</TASM_DisplaySourceLines>
        <BCC_StackFrames>true</BCC_StackFrames>
        <ILINK_FullDebugInfo>true</ILINK_FullDebugInfo>
        <TASM_Debugging>Full</TASM_Debugging>
        <BCC_SourceDebuggingOn>true</BCC_SourceDebuggingOn>
        <BCC_EnableCPPExceptions>true</BCC_EnableCPPExceptions>
        <BCC_DisableFramePtrElimOpt>true</BCC_DisableFramePtrElimOpt>
        <BCC_DisableSpellChecking>true</BCC_DisableSpellChecking>
        <CLANG_UnwindTables>true</CLANG_UnwindTables>
        <ILINK_LibraryPath>$(BDSLIB)\$(PLATFORM)\debug;$(ILINK_LibraryPath)</ILINK_LibraryPath>
        <ILINK_TranslatedLibraryPath>$(BDSLIB)\$(PLATFORM)\debug\$(LANGDIR);$(ILINK_TranslatedLibraryPath)</ILINK_TranslatedLibraryPath>
    </PropertyGroup>
    <PropertyGroup Condition="'$(Cfg_1_Win32)'!=''">
        <VerInfo_Locale>1033</VerInfo_Locale>
        <ILINK_LibraryPath>$(BDSLIB)\$(PLATFORM)$(CC_SUFFIX)\debug;$(ILINK_LibraryPath)</ILINK_LibraryPath>
        <Manifest_File>(None)</Manifest_File>
        <AppDPIAwarenessMode>none</AppDPIAwarenessMode>
    </PropertyGroup>
    <PropertyGroup Condition="'$(Cfg_2)'!=''">
        <Defines>NDEBUG;$(Defines)</Defines>
        <TASM_Debugging>None</TASM_Debugging>
    </PropertyGroup>
    <PropertyGroup Condition="'$(Cfg_2_Win32)'!=''">
        <BCC_UseClassicCompiler>false</BCC_UseClassicCompiler>
    </PropertyGroup>
    <ItemGroup>
        <CppCompile Include="Öğrenci Not Hesaplama Sistemi.cpp">
            <BuildOrder>1</BuildOrder>
        </CppCompile>
        <PCHCompile Include="Öğrenci Not Hesaplama SistemiPCH1.h">
            <BuildOrder>0</BuildOrder>
            <PCH>true</PCH>
        </PCHCompile>
        <BuildConfiguration Include="Base">
            <Key>Base</Key>
        </BuildConfiguration>
        <BuildConfiguration Include="Debug">
            <Key>Cfg_1</Key>
            <CfgParent>Base</CfgParent>
        </BuildConfiguration>
        <BuildConfiguration Include="Release">
            <Key>Cfg_2</Key>
            <CfgParent>Base</CfgParent>
        </BuildConfiguration>
    </ItemGroup>
    <ProjectExtensions>
        <Borland.Personality>CPlusPlusBuilder.Personality.12</Borland.Personality>
        <Borland.ProjectType>CppConsoleApplication</Borland.ProjectType>
        <BorlandProject>
            <CPlusPlusBuilder.Personality>
                <ProjectProperties>
                    <ProjectProperties Name="AutoShowDeps">False</ProjectProperties>
                    <ProjectProperties Name="ManagePaths">True</ProjectProperties>
                    <ProjectProperties Name="VerifyPackages">True</ProjectProperties>
                    <ProjectProperties Name="IndexFiles">False</ProjectProperties>
                </ProjectProperties>
                <Excluded_Packages>
                    <Excluded_Packages Name="$(BDSBIN)\bcboffice2k290.bpl">Embarcadero C++Builder Office 2000 Servers Package</Excluded_Packages>
                    <Excluded_Packages Name="$(BDSBIN)\bcbofficexp290.bpl">Embarcadero C++Builder Office XP Servers Package</Excluded_Packages>
                </Excluded_Packages>
            </CPlusPlusBuilder.Personality>
            <Deployment Version="4">
                <DeployFile LocalName="$(BDS)\Redist\iossimulator\libcgunwind.1.0.dylib" Class="DependencyModule">
                    <Platform Name="iOSSimulator">
                        <Overwrite>true</Overwrite>
                    </Platform>
                </DeployFile>
                <DeployFile LocalName="$(BDS)\Redist\iossimulator\libpcre.dylib" Class="DependencyModule">
                    <Platform Name="iOSSimulator">
                        <Overwrite>true</Overwrite>
                    </Platform>
                </DeployFile>
                <DeployFile Condition="'$(DynamicRTL)'=='true'" LocalName="$(BDS)\Redist\osx32\libcgcrtl.dylib" Class="DependencyModule">
                    <Platform Name="OSX32">
                        <Overwrite>true</Overwrite>
                    </Platform>
                </DeployFile>
                <DeployFile Condition="'$(DynamicRTL)'=='true'" LocalName="$(BDS)\Redist\osx32\libcgstl.dylib" Class="DependencyModule">
                    <Platform Name="OSX32">
                        <Overwrite>true</Overwrite>
                    </Platform>
                </DeployFile>
                <DeployFile LocalName="$(BDS)\Redist\osx32\libcgunwind.1.0.dylib" Class="DependencyModule">
                    <Platform Name="OSX32">
                        <Overwrite>true</Overwrite>
                    </Platform>
                </DeployFile>
                <DeployFile Condition="'$(UsingDelphiRTL)'=='true'" LocalName="$(BDS)\bin64\borlndmm.dll" Class="DependencyModule">
                    <Platform Name="Win64">
                        <Overwrite>true</Overwrite>
                    </Platform>
                </DeployFile>
                <DeployFile Condition="'$(DynamicRTL)'=='true' And '$(Multithreaded)'!='true'" LocalName="$(BDS)\bin64\cc64290.dll" Class="DependencyModule">
                    <Platform Name="Win64">
                        <Overwrite>true</Overwrite>
                    </Platform>
                </DeployFile>
                <DeployFile Condition="'$(DynamicRTL)'=='true' And '$(Multithreaded)'=='true'" LocalName="$(BDS)\bin64\cc64290mt.dll" Class="DependencyModule">
                    <Platform Name="Win64">
                        <Overwrite>true</Overwrite>
                    </Platform>
                </DeployFile>
                <DeployFile Condition="'$(UsingDelphiRTL)'=='true'" LocalName="$(BDS)\bin\borlndmm.dll" Class="DependencyModule">
                    <Platform Name="Win32">
                        <Overwrite>true</Overwrite>
                    </Platform>
                </DeployFile>
                <DeployFile Condition="'$(DynamicRTL)'=='true' And '$(Multithreaded)'!='true'" LocalName="$(BDS)\bin\cc32290.dll" Class="DependencyModule">
                    <Platform Name="Win32">
                        <Overwrite>true</Overwrite>
                    </Platform>
                </DeployFile>
                <DeployFile Condition="'$(DynamicRTL)'=='true' And '$(Multithreaded)'=='true'" LocalName="$(BDS)\bin\cc32290mt.dll" Class="DependencyModule">
                    <Platform Name="Win32">
                        <Overwrite>true</Overwrite>
                    </Platform>
                </DeployFile>
                <DeployFile Condition="'$(DynamicRTL)'=='true' And '$(Multithreaded)'!='true'" LocalName="$(BDS)\bin\cc32c290.dll" Class="DependencyModule">
                    <Platform Name="Win32">
                        <Overwrite>true</Overwrite>
                    </Platform>
                </DeployFile>
                <DeployFile Condition="'$(DynamicRTL)'=='true' And '$(Multithreaded)'=='true'" LocalName="$(BDS)\bin\cc32c290mt.dll" Class="DependencyModule">
                    <Platform Name="Win32">
                        <Overwrite>true</Overwrite>
                    </Platform>
                </DeployFile>
                <DeployFile LocalName=".\Win32\Debug\Öğrenci Not Hesaplama Sistemi.exe" Configuration="Debug" Class="ProjectOutput">
                    <Platform Name="Win32">
                        <RemoteName>Öğrenci Not Hesaplama Sistemi.exe</RemoteName>
                        <Overwrite>true</Overwrite>
                    </Platform>
                </DeployFile>
                <DeployFile LocalName=".\Win32\Debug\Öğrenci Not Hesaplama Sistemi.tds" Configuration="Debug" Class="DebugSymbols">
                    <Platform Name="Win32">
                        <RemoteName>Öğrenci Not Hesaplama Sistemi.tds</RemoteName>
                        <Overwrite>true</Overwrite>
                    </Platform>
                </DeployFile>
                <DeployClass Name="AdditionalDebugSymbols">
                    <Platform Name="OSX32">
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Win32">
                        <Operation>0</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="AndroidClasses">
                    <Platform Name="Android">
                        <RemoteDir>classes</RemoteDir>
                        <Operation>64</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>classes</RemoteDir>
                        <Operation>64</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="AndroidFileProvider">
                    <Platform Name="Android">
                        <RemoteDir>res\xml</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\xml</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="AndroidLibnativeArmeabiFile">
                    <Platform Name="Android">
                        <RemoteDir>library\lib\armeabi</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>library\lib\armeabi</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="AndroidLibnativeArmeabiv7aFile">
                    <Platform Name="Android64">
                        <RemoteDir>library\lib\armeabi-v7a</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="AndroidLibnativeMipsFile">
                    <Platform Name="Android">
                        <RemoteDir>library\lib\mips</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>library\lib\mips</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="AndroidServiceOutput">
                    <Platform Name="Android">
                        <RemoteDir>library\lib\armeabi-v7a</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>library\lib\arm64-v8a</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="AndroidServiceOutput_Android32">
                    <Platform Name="Android64">
                        <RemoteDir>library\lib\armeabi-v7a</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="AndroidSplashImageDef">
                    <Platform Name="Android">
                        <RemoteDir>res\drawable</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\drawable</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="AndroidSplashImageDefV21">
                    <Platform Name="Android">
                        <RemoteDir>res\drawable-anydpi-v21</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\drawable-anydpi-v21</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="AndroidSplashStyles">
                    <Platform Name="Android">
                        <RemoteDir>res\values</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\values</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="AndroidSplashStylesV21">
                    <Platform Name="Android">
                        <RemoteDir>res\values-v21</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\values-v21</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="AndroidSplashStylesV31">
                    <Platform Name="Android">
                        <RemoteDir>res\values-v31</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\values-v31</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="Android_AdaptiveIcon">
                    <Platform Name="Android">
                        <RemoteDir>res\drawable-anydpi-v26</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\drawable-anydpi-v26</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="Android_AdaptiveIconBackground">
                    <Platform Name="Android">
                        <RemoteDir>res\drawable</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\drawable</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="Android_AdaptiveIconForeground">
                    <Platform Name="Android">
                        <RemoteDir>res\drawable</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\drawable</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="Android_AdaptiveIconMonochrome">
                    <Platform Name="Android">
                        <RemoteDir>res\drawable</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\drawable</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="Android_AdaptiveIconV33">
                    <Platform Name="Android">
                        <RemoteDir>res\drawable-anydpi-v33</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\drawable-anydpi-v33</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="Android_Colors">
                    <Platform Name="Android">
                        <RemoteDir>res\values</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\values</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="Android_ColorsDark">
                    <Platform Name="Android">
                        <RemoteDir>res\values-night-v21</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\values-night-v21</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="Android_DefaultAppIcon">
                    <Platform Name="Android">
                        <RemoteDir>res\drawable</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\drawable</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="Android_LauncherIcon144">
                    <Platform Name="Android">
                        <RemoteDir>res\drawable-xxhdpi</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\drawable-xxhdpi</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="Android_LauncherIcon192">
                    <Platform Name="Android">
                        <RemoteDir>res\drawable-xxxhdpi</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\drawable-xxxhdpi</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="Android_LauncherIcon36">
                    <Platform Name="Android">
                        <RemoteDir>res\drawable-ldpi</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\drawable-ldpi</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="Android_LauncherIcon48">
                    <Platform Name="Android">
                        <RemoteDir>res\drawable-mdpi</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\drawable-mdpi</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="Android_LauncherIcon72">
                    <Platform Name="Android">
                        <RemoteDir>res\drawable-hdpi</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\drawable-hdpi</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="Android_LauncherIcon96">
                    <Platform Name="Android">
                        <RemoteDir>res\drawable-xhdpi</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\drawable-xhdpi</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="Android_NotificationIcon24">
                    <Platform Name="Android">
                        <RemoteDir>res\drawable-mdpi</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\drawable-mdpi</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="Android_NotificationIcon36">
                    <Platform Name="Android">
                        <RemoteDir>res\drawable-hdpi</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\drawable-hdpi</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="Android_NotificationIcon48">
                    <Platform Name="Android">
                        <RemoteDir>res\drawable-xhdpi</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\drawable-xhdpi</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="Android_NotificationIcon72">
                    <Platform Name="Android">
                        <RemoteDir>res\drawable-xxhdpi</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\drawable-xxhdpi</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="Android_NotificationIcon96">
                    <Platform Name="Android">
                        <RemoteDir>res\drawable-xxxhdpi</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\drawable-xxxhdpi</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="Android_SplashImage426">
                    <Platform Name="Android">
                        <RemoteDir>res\drawable-small</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\drawable-small</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="Android_SplashImage470">
                    <Platform Name="Android">
                        <RemoteDir>res\drawable-normal</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\drawable-normal</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="Android_SplashImage640">
                    <Platform Name="Android">
                        <RemoteDir>res\drawable-large</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\drawable-large</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="Android_SplashImage960">
                    <Platform Name="Android">
                        <RemoteDir>res\drawable-xlarge</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\drawable-xlarge</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="Android_Strings">
                    <Platform Name="Android">
                        <RemoteDir>res\values</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\values</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="Android_VectorizedNotificationIcon">
                    <Platform Name="Android">
                        <RemoteDir>res\drawable-anydpi-v24</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\drawable-anydpi-v24</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="Android_VectorizedSplash">
                    <Platform Name="Android">
                        <RemoteDir>res\drawable</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\drawable</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="Android_VectorizedSplashDark">
                    <Platform Name="Android">
                        <RemoteDir>res\drawable-night-anydpi-v21</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\drawable-night-anydpi-v21</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="Android_VectorizedSplashV31">
                    <Platform Name="Android">
                        <RemoteDir>res\drawable-anydpi-v31</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\drawable-anydpi-v31</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="Android_VectorizedSplashV31Dark">
                    <Platform Name="Android">
                        <RemoteDir>res\drawable-night-anydpi-v31</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>res\drawable-night-anydpi-v31</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="DebugSymbols">
                    <Platform Name="iOSSimulator">
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="OSX32">
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Win32">
                        <Operation>0</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="DependencyFramework">
                    <Platform Name="OSX32">
                        <Operation>1</Operation>
                        <Extensions>.framework</Extensions>
                    </Platform>
                    <Platform Name="OSX64">
                        <Operation>1</Operation>
                        <Extensions>.framework</Extensions>
                    </Platform>
                    <Platform Name="OSXARM64">
                        <Operation>1</Operation>
                        <Extensions>.framework</Extensions>
                    </Platform>
                    <Platform Name="Win32">
                        <Operation>0</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="DependencyModule">
                    <Platform Name="OSX32">
                        <Operation>1</Operation>
                        <Extensions>.dylib</Extensions>
                    </Platform>
                    <Platform Name="OSX64">
                        <Operation>1</Operation>
                        <Extensions>.dylib</Extensions>
                    </Platform>
                    <Platform Name="OSXARM64">
                        <Operation>1</Operation>
                        <Extensions>.dylib</Extensions>
                    </Platform>
                    <Platform Name="Win32">
                        <Operation>0</Operation>
                        <Extensions>.dll;.bpl</Extensions>
                    </Platform>
                </DeployClass>
                <DeployClass Required="true" Name="DependencyPackage">
                    <Platform Name="iOSDevice32">
                        <Operation>1</Operation>
                        <Extensions>.dylib</Extensions>
                    </Platform>
                    <Platform Name="iOSDevice64">
                        <Operation>1</Operation>
                        <Extensions>.dylib</Extensions>
                    </Platform>
                    <Platform Name="iOSSimARM64">
                        <Operation>1</Operation>
                        <Extensions>.dylib</Extensions>
                    </Platform>
                    <Platform Name="OSX32">
                        <Operation>1</Operation>
                        <Extensions>.dylib</Extensions>
                    </Platform>
                    <Platform Name="OSX64">
                        <Operation>1</Operation>
                        <Extensions>.dylib</Extensions>
                    </Platform>
                    <Platform Name="OSXARM64">
                        <Operation>1</Operation>
                        <Extensions>.dylib</Extensions>
                    </Platform>
                    <Platform Name="Win32">
                        <Operation>0</Operation>
                        <Extensions>.bpl</Extensions>
                    </Platform>
                </DeployClass>
                <DeployClass Name="File">
                    <Platform Name="Android">
                        <Operation>0</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <Operation>0</Operation>
                    </Platform>
                    <Platform Name="iOSDevice32">
                        <Operation>0</Operation>
                    </Platform>
                    <Platform Name="iOSDevice64">
                        <Operation>0</Operation>
                    </Platform>
                    <Platform Name="iOSSimARM64">
                        <Operation>0</Operation>
                    </Platform>
                    <Platform Name="OSX32">
                        <Operation>0</Operation>
                    </Platform>
                    <Platform Name="OSX64">
                        <Operation>0</Operation>
                    </Platform>
                    <Platform Name="OSXARM64">
                        <Operation>0</Operation>
                    </Platform>
                    <Platform Name="Win32">
                        <Operation>0</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="ProjectAndroidManifest">
                    <Platform Name="Android">
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="ProjectOSXDebug"/>
                <DeployClass Name="ProjectOSXEntitlements"/>
                <DeployClass Name="ProjectOSXInfoPList"/>
                <DeployClass Name="ProjectOSXResource">
                    <Platform Name="OSX32">
                        <RemoteDir>Contents\Resources</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="OSX64">
                        <RemoteDir>Contents\Resources</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="OSXARM64">
                        <RemoteDir>Contents\Resources</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Required="true" Name="ProjectOutput">
                    <Platform Name="Android">
                        <RemoteDir>library\lib\armeabi-v7a</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Android64">
                        <RemoteDir>library\lib\arm64-v8a</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="iOSDevice32">
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="iOSDevice64">
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="iOSSimARM64">
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Linux64">
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="OSX32">
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="OSX64">
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="OSXARM64">
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Win32">
                        <Operation>0</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="ProjectOutput_Android32">
                    <Platform Name="Android64">
                        <RemoteDir>library\lib\armeabi-v7a</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="ProjectUWPManifest">
                    <Platform Name="Win32">
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Win64">
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Win64x">
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="ProjectiOSDeviceDebug">
                    <Platform Name="iOSDevice32">
                        <RemoteDir>..\$(PROJECTNAME).app.dSYM\Contents\Resources\DWARF</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="iOSDevice64">
                        <RemoteDir>..\$(PROJECTNAME).app.dSYM\Contents\Resources\DWARF</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="iOSSimARM64">
                        <RemoteDir>..\$(PROJECTNAME).app.dSYM\Contents\Resources\DWARF</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="ProjectiOSEntitlements"/>
                <DeployClass Name="ProjectiOSInfoPList"/>
                <DeployClass Name="ProjectiOSLaunchScreen"/>
                <DeployClass Name="ProjectiOSResource">
                    <Platform Name="iOSDevice32">
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="iOSDevice64">
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="iOSSimARM64">
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="UWP_CppLogo150">
                    <Platform Name="Win32">
                        <RemoteDir>Assets</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Win64">
                        <RemoteDir>Assets</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Win64x">
                        <RemoteDir>Assets</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="UWP_CppLogo44">
                    <Platform Name="Win32">
                        <RemoteDir>Assets</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Win64">
                        <RemoteDir>Assets</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="Win64x">
                        <RemoteDir>Assets</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="iOS_AppStore1024">
                    <Platform Name="iOSDevice64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\AppIcon.appiconset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="iOSSimARM64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\AppIcon.appiconset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="iPad_AppIcon152">
                    <Platform Name="iOSDevice64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\AppIcon.appiconset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="iOSSimARM64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\AppIcon.appiconset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="iPad_AppIcon167">
                    <Platform Name="iOSDevice64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\AppIcon.appiconset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="iOSSimARM64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\AppIcon.appiconset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="iPad_Launch2x">
                    <Platform Name="iOSDevice64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\LaunchScreenImage.imageset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="iOSSimARM64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\LaunchScreenImage.imageset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="iPad_LaunchDark2x">
                    <Platform Name="iOSDevice64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\LaunchScreenImage.imageset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="iOSSimARM64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\LaunchScreenImage.imageset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="iPad_Notification40">
                    <Platform Name="iOSDevice64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\AppIcon.appiconset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="iOSSimARM64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\AppIcon.appiconset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="iPad_Setting58">
                    <Platform Name="iOSDevice64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\AppIcon.appiconset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="iOSSimARM64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\AppIcon.appiconset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="iPad_SpotLight80">
                    <Platform Name="iOSDevice64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\AppIcon.appiconset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="iOSSimARM64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\AppIcon.appiconset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="iPhone_AppIcon120">
                    <Platform Name="iOSDevice64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\AppIcon.appiconset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="iOSSimARM64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\AppIcon.appiconset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="iPhone_AppIcon180">
                    <Platform Name="iOSDevice64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\AppIcon.appiconset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="iOSSimARM64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\AppIcon.appiconset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="iPhone_Launch2x">
                    <Platform Name="iOSDevice64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\LaunchScreenImage.imageset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="iOSSimARM64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\LaunchScreenImage.imageset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="iPhone_Launch3x">
                    <Platform Name="iOSDevice64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\LaunchScreenImage.imageset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="iOSSimARM64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\LaunchScreenImage.imageset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="iPhone_LaunchDark2x">
                    <Platform Name="iOSDevice64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\LaunchScreenImage.imageset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="iOSSimARM64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\LaunchScreenImage.imageset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="iPhone_LaunchDark3x">
                    <Platform Name="iOSDevice64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\LaunchScreenImage.imageset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="iOSSimARM64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\LaunchScreenImage.imageset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="iPhone_Notification40">
                    <Platform Name="iOSDevice64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\AppIcon.appiconset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="iOSSimARM64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\AppIcon.appiconset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="iPhone_Notification60">
                    <Platform Name="iOSDevice64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\AppIcon.appiconset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="iOSSimARM64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\AppIcon.appiconset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="iPhone_Setting58">
                    <Platform Name="iOSDevice64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\AppIcon.appiconset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="iOSSimARM64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\AppIcon.appiconset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="iPhone_Setting87">
                    <Platform Name="iOSDevice64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\AppIcon.appiconset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="iOSSimARM64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\AppIcon.appiconset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="iPhone_Spotlight120">
                    <Platform Name="iOSDevice64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\AppIcon.appiconset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="iOSSimARM64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\AppIcon.appiconset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <DeployClass Name="iPhone_Spotlight80">
                    <Platform Name="iOSDevice64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\AppIcon.appiconset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                    <Platform Name="iOSSimARM64">
                        <RemoteDir>..\$(PROJECTNAME).launchscreen\Assets\AppIcon.appiconset</RemoteDir>
                        <Operation>1</Operation>
                    </Platform>
                </DeployClass>
                <ProjectRoot Platform="Android" Name="$(PROJECTNAME)"/>
                <ProjectRoot Platform="Android64" Name="$(PROJECTNAME)"/>
                <ProjectRoot Platform="iOSDevice32" Name="$(PROJECTNAME).app"/>
                <ProjectRoot Platform="iOSDevice64" Name="$(PROJECTNAME).app"/>
                <ProjectRoot Platform="iOSSimARM64" Name="$(PROJECTNAME).app"/>
                <ProjectRoot Platform="Linux64" Name="$(PROJECTNAME)"/>
                <ProjectRoot Platform="OSX32" Name="$(PROJECTNAME)"/>
                <ProjectRoot Platform="OSX64" Name="$(PROJECTNAME)"/>
                <ProjectRoot Platform="OSXARM64" Name="$(PROJECTNAME)"/>
                <ProjectRoot Platform="Win32" Name="$(PROJECTNAME)"/>
                <ProjectRoot Platform="Win64" Name="$(PROJECTNAME)"/>
                <ProjectRoot Platform="Win64x" Name="$(PROJECTNAME)"/>
            </Deployment>
            <Platforms>
                <Platform value="Win32">True</Platform>
            </Platforms>
        </BorlandProject>
        <ProjectFileVersion>12</ProjectFileVersion>
    </ProjectExtensions>
    <Import Project="$(BDS)\Bin\CodeGear.Cpp.Targets" Condition="Exists('$(BDS)\Bin\CodeGear.Cpp.Targets')"/>
    <Import Project="$(APPDATA)\Embarcadero\$(BDSAPPDATABASEDIR)\$(PRODUCTVERSION)\UserTools.proj" Condition="Exists('$(APPDATA)\Embarcadero\$(BDSAPPDATABASEDIR)\$(PRODUCTVERSION)\UserTools.proj')"/>
    <Import Project="$(MSBuildProjectName).deployproj" Condition="Exists('$(MSBuildProjectName).deployproj')"/>
</Project>
