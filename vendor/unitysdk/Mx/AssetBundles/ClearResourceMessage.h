#pragma once
#include "../../unitysdk.h"

#define MX_ASSETBUNDLES_CLEARRESOURCEMESSAGE_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x144D980)
#define MX_ASSETBUNDLES_CLEARRESOURCEMESSAGE_GET_CURRENTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x144D990)
#define MX_ASSETBUNDLES_CLEARRESOURCEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x144D9A0)
#define MX_ASSETBUNDLES_CLEARRESOURCEMESSAGE_GET_FILEFULLNAME_OFFSET UNITYSDK_OFFSET(0x144DA20)
#define MX_ASSETBUNDLES_CLEARRESOURCEMESSAGE_GET_CURRENTCOUNT_OFFSET UNITYSDK_OFFSET(0x144DA30)

namespace MX::AssetBundles
{
	inline static constexpr unsigned int ClearResourceMessage_TypeDefinitionIndex = 14987;

	class ClearResourceMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Int32 _CurrentCount_k__BackingField; // 0x18
		::System::Int32 _TotalCount_k__BackingField; // 0x1C
		::System::String* _CurrentDirectory_k__BackingField; // 0x20
		::System::String* _FileFullName_k__BackingField; // 0x28

		::System::Int32 get_TotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_CLEARRESOURCEMESSAGE_GET_TOTALCOUNT_OFFSET))(nullptr);
		}

		::System::String* get_CurrentDirectory()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_CLEARRESOURCEMESSAGE_GET_CURRENTDIRECTORY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg2, ::System::IO::FileInfo* arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::IO::FileInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_CLEARRESOURCEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::String* get_FileFullName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_CLEARRESOURCEMESSAGE_GET_FILEFULLNAME_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_CLEARRESOURCEMESSAGE_GET_CURRENTCOUNT_OFFSET))(nullptr);
		}

	};
}

