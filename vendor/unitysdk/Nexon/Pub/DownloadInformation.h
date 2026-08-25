#pragma once
#include "../../unitysdk.h"

namespace Nexon::Pub { class DownloadSize; }

#define NEXON_PUB_DOWNLOADINFORMATION_GET_PREVDOWNLOADEDBYTE_OFFSET UNITYSDK_OFFSET(0x954C0D0)
#define NEXON_PUB_DOWNLOADINFORMATION_SET_PREVDOWNLOADEDBYTE_OFFSET UNITYSDK_OFFSET(0x954C0E0)
#define NEXON_PUB_DOWNLOADINFORMATION_GET_PREVDOWNLOADEDFILECOUNT_OFFSET UNITYSDK_OFFSET(0x954C0F0)
#define NEXON_PUB_DOWNLOADINFORMATION_SET_PREVDOWNLOADEDFILECOUNT_OFFSET UNITYSDK_OFFSET(0x954C100)
#define NEXON_PUB_DOWNLOADINFORMATION_GET_DOWNLOADGROUP_OFFSET UNITYSDK_OFFSET(0x954C110)
#define NEXON_PUB_DOWNLOADINFORMATION_SET_DOWNLOADGROUP_OFFSET UNITYSDK_OFFSET(0x954C120)
#define NEXON_PUB_DOWNLOADINFORMATION_GET_TARGETPATCHVERSION_OFFSET UNITYSDK_OFFSET(0x954C130)
#define NEXON_PUB_DOWNLOADINFORMATION_SET_TARGETPATCHVERSION_OFFSET UNITYSDK_OFFSET(0x954C140)
#define NEXON_PUB_DOWNLOADINFORMATION_GET_TOTALDOWNLOADSIZE_OFFSET UNITYSDK_OFFSET(0x954C150)
#define NEXON_PUB_DOWNLOADINFORMATION_SET_TOTALDOWNLOADSIZE_OFFSET UNITYSDK_OFFSET(0x954C160)
#define NEXON_PUB_DOWNLOADINFORMATION_GET_CURRENTDOWNLOADSIZE_OFFSET UNITYSDK_OFFSET(0x954C170)
#define NEXON_PUB_DOWNLOADINFORMATION_SET_CURRENTDOWNLOADSIZE_OFFSET UNITYSDK_OFFSET(0x954C180)
#define NEXON_PUB_DOWNLOADINFORMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x954C190)

namespace Nexon::Pub
{
	inline static constexpr unsigned int DownloadInformation_TypeDefinitionIndex = 37540;

	class DownloadInformation : public Il2CppObject
	{
	public:
		::System::Int64 _PrevDownloadedByte_k__BackingField; // 0x10
		::System::Int32 _PrevDownloadedFileCount_k__BackingField; // 0x18
		Il2CppObject* _DownloadGroup_k__BackingField; // 0x20
		::System::Int64 _TargetPatchVersion_k__BackingField; // 0x28
		::Nexon::Pub::DownloadSize* _TotalDownloadSize_k__BackingField; // 0x30
		::Nexon::Pub::DownloadSize* _CurrentDownloadSize_k__BackingField; // 0x38

		::System::Int64 get_PrevDownloadedByte()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_DOWNLOADINFORMATION_GET_PREVDOWNLOADEDBYTE_OFFSET))(nullptr);
		}

		::System::Void set_PrevDownloadedByte(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_DOWNLOADINFORMATION_SET_PREVDOWNLOADEDBYTE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PrevDownloadedFileCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_DOWNLOADINFORMATION_GET_PREVDOWNLOADEDFILECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_PrevDownloadedFileCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_DOWNLOADINFORMATION_SET_PREVDOWNLOADEDFILECOUNT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DownloadGroup()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_DOWNLOADINFORMATION_GET_DOWNLOADGROUP_OFFSET))(nullptr);
		}

		::System::Void set_DownloadGroup(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_DOWNLOADINFORMATION_SET_DOWNLOADGROUP_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TargetPatchVersion()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_DOWNLOADINFORMATION_GET_TARGETPATCHVERSION_OFFSET))(nullptr);
		}

		::System::Void set_TargetPatchVersion(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_DOWNLOADINFORMATION_SET_TARGETPATCHVERSION_OFFSET))(arg, nullptr);
		}

		::Nexon::Pub::DownloadSize* get_TotalDownloadSize()
		{
			return (return (::Nexon::Pub::DownloadSize*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_DOWNLOADINFORMATION_GET_TOTALDOWNLOADSIZE_OFFSET))(nullptr);
		}

		::System::Void set_TotalDownloadSize(::Nexon::Pub::DownloadSize* arg)
		{
			((::System::Void(*)(::Nexon::Pub::DownloadSize*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_DOWNLOADINFORMATION_SET_TOTALDOWNLOADSIZE_OFFSET))(arg, nullptr);
		}

		::Nexon::Pub::DownloadSize* get_CurrentDownloadSize()
		{
			return (return (::Nexon::Pub::DownloadSize*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_DOWNLOADINFORMATION_GET_CURRENTDOWNLOADSIZE_OFFSET))(nullptr);
		}

		::System::Void set_CurrentDownloadSize(::Nexon::Pub::DownloadSize* arg)
		{
			((::System::Void(*)(::Nexon::Pub::DownloadSize*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_DOWNLOADINFORMATION_SET_CURRENTDOWNLOADSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_DOWNLOADINFORMATION_.CTOR_OFFSET))(nullptr);
		}

	};
}

