#pragma once
#include "unitysdk.h"

#define NXPATCHERDOWNLOADDATA_SETCHECKRESOURCEPROGRESSDATA_OFFSET UNITYSDK_OFFSET(0xC63460)
#define NXPATCHERDOWNLOADDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xC62A90)
#define NXPATCHERDOWNLOADDATA_SETDOWNLOADPROGRESSDATA_OFFSET UNITYSDK_OFFSET(0xC63180)
#define NXPATCHERDOWNLOADDATA_SETCHECKRESOURCERESULTDATA_OFFSET UNITYSDK_OFFSET(0xC62D70)
#define NXPATCHERDOWNLOADDATA_SETCOMPLETEDATA_OFFSET UNITYSDK_OFFSET(0xC63920)

	inline static constexpr unsigned int NXPatcherDownloadData_TypeDefinitionIndex = 8959;

	class NXPatcherDownloadData : public Il2CppObject
	{
	public:
		::System::Int64 CurDownloadMByte; // 0x10
		::System::Int64 TotalDownloadMByte; // 0x18
		::System::Int32 VerifiedCount; // 0x20
		::System::Int32 TotalCount; // 0x24
		::System::Boolean CheckResource; // 0x28
		::System::Boolean DownloadComplete; // 0x29

		::System::Void SetCheckResourceProgressData(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NXPATCHERDOWNLOADDATA_SETCHECKRESOURCEPROGRESSDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NXPATCHERDOWNLOADDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetDownloadProgressData(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NXPATCHERDOWNLOADDATA_SETDOWNLOADPROGRESSDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetCheckResourceResultData(::System::Int64 arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NXPATCHERDOWNLOADDATA_SETCHECKRESOURCERESULTDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetCompleteData(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NXPATCHERDOWNLOADDATA_SETCOMPLETEDATA_OFFSET))(arg, nullptr);
		}

	};

