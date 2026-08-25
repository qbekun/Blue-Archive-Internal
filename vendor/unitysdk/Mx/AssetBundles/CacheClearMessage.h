#pragma once
#include "../../unitysdk.h"

#define MX_ASSETBUNDLES_CACHECLEARMESSAGE_GET_PROGRESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x144D940)
#define MX_ASSETBUNDLES_CACHECLEARMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x144D950)

namespace MX::AssetBundles
{
	inline static constexpr unsigned int CacheClearMessage_TypeDefinitionIndex = 14986;

	class CacheClearMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::String* _ProgressMessage_k__BackingField; // 0x18

		::System::String* get_ProgressMessage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_CACHECLEARMESSAGE_GET_PROGRESSMESSAGE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_CACHECLEARMESSAGE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

