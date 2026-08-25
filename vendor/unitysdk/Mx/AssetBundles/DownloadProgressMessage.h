#pragma once
#include "../../unitysdk.h"

class PatchGroupType;

#define MX_ASSETBUNDLES_DOWNLOADPROGRESSMESSAGE_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x144D7B0)
#define MX_ASSETBUNDLES_DOWNLOADPROGRESSMESSAGE_GET_CURRENTRECIEVEDBYTES_OFFSET UNITYSDK_OFFSET(0x144D7C0)
#define MX_ASSETBUNDLES_DOWNLOADPROGRESSMESSAGE_SET_CURRENTCOUNT_OFFSET UNITYSDK_OFFSET(0x144D7D0)
#define MX_ASSETBUNDLES_DOWNLOADPROGRESSMESSAGE_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x144D7E0)
#define MX_ASSETBUNDLES_DOWNLOADPROGRESSMESSAGE_GET_CURRENTCOUNT_OFFSET UNITYSDK_OFFSET(0x144D7F0)
#define MX_ASSETBUNDLES_DOWNLOADPROGRESSMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x144D800)
#define MX_ASSETBUNDLES_DOWNLOADPROGRESSMESSAGE_GET_TOTALBYTES_OFFSET UNITYSDK_OFFSET(0x144D860)
#define MX_ASSETBUNDLES_DOWNLOADPROGRESSMESSAGE_SET_TOTALBYTES_OFFSET UNITYSDK_OFFSET(0x144D870)
#define MX_ASSETBUNDLES_DOWNLOADPROGRESSMESSAGE_GET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0x144D880)
#define MX_ASSETBUNDLES_DOWNLOADPROGRESSMESSAGE_SET_CURRENTRECIEVEDBYTES_OFFSET UNITYSDK_OFFSET(0x144D890)

namespace MX::AssetBundles
{
	inline static constexpr unsigned int DownloadProgressMessage_TypeDefinitionIndex = 14984;

	class DownloadProgressMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Int64 _CurrentRecievedBytes_k__BackingField; // 0x18
		::System::Int64 _TotalBytes_k__BackingField; // 0x20
		::System::Int32 _CurrentCount_k__BackingField; // 0x28
		::System::Int64 _TotalCount_k__BackingField; // 0x30
		PatchGroupType* _GroupType_k__BackingField; // 0x38

		::System::Int64 get_TotalCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_DOWNLOADPROGRESSMESSAGE_GET_TOTALCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_CurrentRecievedBytes()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_DOWNLOADPROGRESSMESSAGE_GET_CURRENTRECIEVEDBYTES_OFFSET))(nullptr);
		}

		::System::Void set_CurrentCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_DOWNLOADPROGRESSMESSAGE_SET_CURRENTCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_TotalCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_DOWNLOADPROGRESSMESSAGE_SET_TOTALCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CurrentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_DOWNLOADPROGRESSMESSAGE_GET_CURRENTCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(PatchGroupType* arg, ::System::Int32 arg2, ::System::Int64 arg3, ::System::Int32 arg4, ::System::Int64 arg5)
		{
			((::System::Void(*)(PatchGroupType*, ::System::Int32, ::System::Int64, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_DOWNLOADPROGRESSMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Int64 get_TotalBytes()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_DOWNLOADPROGRESSMESSAGE_GET_TOTALBYTES_OFFSET))(nullptr);
		}

		::System::Void set_TotalBytes(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_DOWNLOADPROGRESSMESSAGE_SET_TOTALBYTES_OFFSET))(arg, nullptr);
		}

		PatchGroupType* get_GroupType()
		{
			return ((PatchGroupType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_DOWNLOADPROGRESSMESSAGE_GET_GROUPTYPE_OFFSET))(nullptr);
		}

		::System::Void set_CurrentRecievedBytes(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_DOWNLOADPROGRESSMESSAGE_SET_CURRENTRECIEVEDBYTES_OFFSET))(arg, nullptr);
		}

	};
}

