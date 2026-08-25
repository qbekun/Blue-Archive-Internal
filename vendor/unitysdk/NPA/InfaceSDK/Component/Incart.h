#pragma once
#include "../../../unitysdk.h"

#define NPA_INFACESDK_COMPONENT_INCART_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D0DAD0)
#define NPA_INFACESDK_COMPONENT_INCART_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9D0DC10)
#define NPA_INFACESDK_COMPONENT_INCART_GETSHOWCARTURL_OFFSET UNITYSDK_OFFSET(0x9D0DD70)
#define NPA_INFACESDK_COMPONENT_INCART_INITCART_OFFSET UNITYSDK_OFFSET(0x9D0E090)
#define NPA_INFACESDK_COMPONENT_INCART_ADDCARTITEM_OFFSET UNITYSDK_OFFSET(0x9D0E3E0)
#define NPA_INFACESDK_COMPONENT_INCART_GETCARTPRODUCTCOUNT_OFFSET UNITYSDK_OFFSET(0x9D0EA80)

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int Incart_TypeDefinitionIndex = 25881;

	class Incart : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_INCART_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_INCART_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void GetShowCartUrl(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_INCART_GETSHOWCARTURL_OFFSET))(str, arg, nullptr);
		}

		::System::Void InitCart(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_INCART_INITCART_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void AddCartItem(::System::String* str, ::System::String* str, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_INCART_ADDCARTITEM_OFFSET))(str, str, arg, arg, nullptr);
		}

		::System::Void GetCartProductCount(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_INCART_GETCARTPRODUCTCOUNT_OFFSET))(str, str, arg, nullptr);
		}

	};
}

