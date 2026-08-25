#pragma once
#include "../../unitysdk.h"

#define NPA_EDITOR_NXPTOYCARTMANAGER_SHOWCART_OFFSET UNITYSDK_OFFSET(0x9D40050)
#define NPA_EDITOR_NXPTOYCARTMANAGER_INITCART_OFFSET UNITYSDK_OFFSET(0x9D402C0)
#define NPA_EDITOR_NXPTOYCARTMANAGER_ADDCARTITEM_OFFSET UNITYSDK_OFFSET(0x9D40570)
#define NPA_EDITOR_NXPTOYCARTMANAGER_GETCARTPRODUCTCOUNT_OFFSET UNITYSDK_OFFSET(0x9D40830)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPToyCartManager_TypeDefinitionIndex = 26128;

	class NXPToyCartManager : public Il2CppObject
	{
	public:
		::System::Void ShowCart(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYCARTMANAGER_SHOWCART_OFFSET))(str, arg, nullptr);
		}

		::System::Void InitCart(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYCARTMANAGER_INITCART_OFFSET))(str, arg, nullptr);
		}

		::System::Void AddCartItem(::System::String* str, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYCARTMANAGER_ADDCARTITEM_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void GetCartProductCount(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYCARTMANAGER_GETCARTPRODUCTCOUNT_OFFSET))(str, arg, nullptr);
		}

	};
}

