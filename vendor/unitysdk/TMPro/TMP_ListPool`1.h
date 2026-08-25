#pragma once
#include "../unitysdk.h"

#define TMPRO_TMP_LISTPOOL`1_GET_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_TMP_LISTPOOL`1_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_TMP_LISTPOOL`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace TMPro
{
	inline static constexpr unsigned int TMP_ListPool`1_TypeDefinitionIndex = 33698;

	class TMP_ListPool`1 : public Il2CppObject
	{
	public:
		Il2CppObject* s_ListPool; // 0x0

		Il2CppObject* Get()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_LISTPOOL`1_GET_OFFSET))(nullptr);
		}

		::System::Void Release(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_LISTPOOL`1_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_LISTPOOL`1_.CCTOR_OFFSET))(nullptr);
		}

	};
}

