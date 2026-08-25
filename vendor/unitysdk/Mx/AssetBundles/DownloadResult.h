#pragma once
#include "../../unitysdk.h"

#define MX_ASSETBUNDLES_DOWNLOADRESULT_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x14450E0)
#define MX_ASSETBUNDLES_DOWNLOADRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x14450F0)
#define MX_ASSETBUNDLES_DOWNLOADRESULT_SET_DECOMPRESSORDATABYTES_OFFSET UNITYSDK_OFFSET(0x1445100)
#define MX_ASSETBUNDLES_DOWNLOADRESULT_SET_ERROR_OFFSET UNITYSDK_OFFSET(0x1445110)
#define MX_ASSETBUNDLES_DOWNLOADRESULT_GET_DECOMPRESSORDATABYTES_OFFSET UNITYSDK_OFFSET(0x1445120)

namespace MX::AssetBundles
{
	inline static constexpr unsigned int DownloadResult_TypeDefinitionIndex = 14947;

	class DownloadResult : public Il2CppObject
	{
	public:
		::System::Exception* _Error_k__BackingField; // 0x10
		::System::Boolean NeedUnzip; // 0x18
		::Il2CppArray<::System::Object*>* _DecompressorDataBytes_k__BackingField; // 0x20

		::System::Exception* get_Error()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_DOWNLOADRESULT_GET_ERROR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_DOWNLOADRESULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_DecompressorDataBytes(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_DOWNLOADRESULT_SET_DECOMPRESSORDATABYTES_OFFSET))(arg, nullptr);
		}

		::System::Void set_Error(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_DOWNLOADRESULT_SET_ERROR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_DecompressorDataBytes()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_DOWNLOADRESULT_GET_DECOMPRESSORDATABYTES_OFFSET))(nullptr);
		}

	};
}

