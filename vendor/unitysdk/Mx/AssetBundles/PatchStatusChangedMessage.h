#pragma once
#include "../../unitysdk.h"

namespace MX::AssetBundles { class PatchStatus; }

#define MX_ASSETBUNDLES_PATCHSTATUSCHANGEDMESSAGE_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x144D8A0)
#define MX_ASSETBUNDLES_PATCHSTATUSCHANGEDMESSAGE_GET_URL_OFFSET UNITYSDK_OFFSET(0x144D8B0)
#define MX_ASSETBUNDLES_PATCHSTATUSCHANGEDMESSAGE_GET_STACKTRACE_OFFSET UNITYSDK_OFFSET(0x144D8C0)
#define MX_ASSETBUNDLES_PATCHSTATUSCHANGEDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x144D8D0)
#define MX_ASSETBUNDLES_PATCHSTATUSCHANGEDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x144D8F0)

namespace MX::AssetBundles
{
	inline static constexpr unsigned int PatchStatusChangedMessage_TypeDefinitionIndex = 14985;

	class PatchStatusChangedMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::MX::AssetBundles::PatchStatus* _Status_k__BackingField; // 0x18
		::System::String* _Url_k__BackingField; // 0x20
		::System::String* _StackTrace_k__BackingField; // 0x28

		::MX::AssetBundles::PatchStatus* get_Status()
		{
			return ((::MX::AssetBundles::PatchStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_PATCHSTATUSCHANGEDMESSAGE_GET_STATUS_OFFSET))(nullptr);
		}

		::System::String* get_Url()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_PATCHSTATUSCHANGEDMESSAGE_GET_URL_OFFSET))(nullptr);
		}

		::System::String* get_StackTrace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_PATCHSTATUSCHANGEDMESSAGE_GET_STACKTRACE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::AssetBundles::PatchStatus* arg)
		{
			((::System::Void(*)(::MX::AssetBundles::PatchStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_PATCHSTATUSCHANGEDMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::AssetBundles::PatchStatus* arg, ::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::MX::AssetBundles::PatchStatus*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_PATCHSTATUSCHANGEDMESSAGE_.CTOR_OFFSET))(arg, str, str2, nullptr);
		}

	};
}

