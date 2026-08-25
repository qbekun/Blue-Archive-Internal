#pragma once
#include "../../unitysdk.h"

#define MX_ASSETBUNDLES_DOWNLOADMEMORYPOOL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1444D80)
#define MX_ASSETBUNDLES_DOWNLOADMEMORYPOOL_RETURN_OFFSET UNITYSDK_OFFSET(0x1444D90)
#define MX_ASSETBUNDLES_DOWNLOADMEMORYPOOL_RENT_OFFSET UNITYSDK_OFFSET(0x1444F30)

namespace MX::AssetBundles
{
	inline static constexpr unsigned int DownloadMemoryPool_TypeDefinitionIndex = 14946;

	class DownloadMemoryPool : public Il2CppObject
	{
	public:
		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_DOWNLOADMEMORYPOOL_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Return(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_DOWNLOADMEMORYPOOL_RETURN_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Rent(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_DOWNLOADMEMORYPOOL_RENT_OFFSET))(arg, arg2, nullptr);
		}

	};
}

