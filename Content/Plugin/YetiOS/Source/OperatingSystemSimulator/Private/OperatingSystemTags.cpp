// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "OperatingSystemTags.h"

// Generic tags
UE_DEFINE_GAMEPLAY_TAG(InvalidTag, "OperatingSystem.Invalid");

// Device tags
UE_DEFINE_GAMEPLAY_TAG(PCDeviceTag, "OperatingSystem.Devices.PC");

// Operating System tags
UE_DEFINE_GAMEPLAY_TAG(UnixOsTag, "OperatingSystem.Type.Unix");
UE_DEFINE_GAMEPLAY_TAG(NonUnixOsTag, "OperatingSystem.Type.NonUnix");

// Hardware tags
UE_DEFINE_GAMEPLAY_TAG(MbbTag, "OperatingSystem.Hardware.Type.Motherboard");
UE_DEFINE_GAMEPLAY_TAG(CpuTag, "OperatingSystem.Hardware.Type.CPU");
UE_DEFINE_GAMEPLAY_TAG(GpuTag, "OperatingSystem.Hardware.Type.GPU");
UE_DEFINE_GAMEPLAY_TAG(HddTag, "OperatingSystem.Hardware.Type.HDD");
UE_DEFINE_GAMEPLAY_TAG(PsuTag, "OperatingSystem.Hardware.Type.PSU");
UE_DEFINE_GAMEPLAY_TAG(RamTag, "OperatingSystem.Hardware.Type.RAM");

// CPU socket tags
UE_DEFINE_GAMEPLAY_TAG(LGA1150_Tag, "OperatingSystem.Hardware.CPU.Socket.1150");
UE_DEFINE_GAMEPLAY_TAG(LGA1151_Tag, "OperatingSystem.Hardware.CPU.Socket.1151");
UE_DEFINE_GAMEPLAY_TAG(LGA1155_Tag, "OperatingSystem.Hardware.CPU.Socket.1155");
UE_DEFINE_GAMEPLAY_TAG(LGA2011_Tag, "OperatingSystem.Hardware.CPU.Socket.2011");
UE_DEFINE_GAMEPLAY_TAG(LGA2066_Tag, "OperatingSystem.Hardware.CPU.Socket.2066");

// Directory tags
UE_DEFINE_GAMEPLAY_TAG(DirRoot_Tag, "OperatingSystem.Directory.Unix.Root");
UE_DEFINE_GAMEPLAY_TAG(DirUsers_Tag, "OperatingSystem.Directory.Common.Users");
UE_DEFINE_GAMEPLAY_TAG(DirDesktop_Tag, "OperatingSystem.Directory.Common.Desktop");
UE_DEFINE_GAMEPLAY_TAG(DirDocuments_Tag, "OperatingSystem.Directory.Common.Documents");
UE_DEFINE_GAMEPLAY_TAG(DirDownloads_Tag, "OperatingSystem.Directory.Common.Downloads");
UE_DEFINE_GAMEPLAY_TAG(DirHome_Tag, "OperatingSystem.Directory.Unix.Home");
UE_DEFINE_GAMEPLAY_TAG(DirMusic_Tag, "OperatingSystem.Directory.Unix.Music");
UE_DEFINE_GAMEPLAY_TAG(DirPictures_Tag, "OperatingSystem.Directory.Common.Pictures");
UE_DEFINE_GAMEPLAY_TAG(DirVideos_Tag, "OperatingSystem.Directory.Common.Videos");
UE_DEFINE_GAMEPLAY_TAG(DirOther_Tag, "OperatingSystem.Directory.Common");


// Widget tags
UE_DEFINE_GAMEPLAY_TAG(OSWidget_Installation_Tag, "OperatingSystem.Widget.OS.Installation");
UE_DEFINE_GAMEPLAY_TAG(OSWidget_Loading_Tag, "OperatingSystem.Widget.OS.Loading");
UE_DEFINE_GAMEPLAY_TAG(OSWidget_InitialStartup_Tag, "OperatingSystem.Widget.OS.InitialStartup");
UE_DEFINE_GAMEPLAY_TAG(OSWidget_InitialStartupFinish_Tag, "OperatingSystem.Widget.OS.InitialStartupFinish");
UE_DEFINE_GAMEPLAY_TAG(OSWidget_Logon_Tag, "OperatingSystem.Widget.OS.Logon");
UE_DEFINE_GAMEPLAY_TAG(OSWidget_Desktop_Tag, "OperatingSystem.Widget.OS.Desktop");
UE_DEFINE_GAMEPLAY_TAG(OSWidget_Shutdown_Tag, "OperatingSystem.Widget.OS.Shutdown");
UE_DEFINE_GAMEPLAY_TAG(OSWidget_Restart_Tag, "OperatingSystem.Widget.OS.Restart");
