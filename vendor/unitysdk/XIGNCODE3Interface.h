#pragma once
#include "unitysdk.h"

#define XIGNCODE3INTERFACE_.CTOR_OFFSET UNITYSDK_OFFSET(0x21248D0)
#define XIGNCODE3INTERFACE_GETCOOKIE2_OFFSET UNITYSDK_OFFSET(0x2124950)
#define XIGNCODE3INTERFACE_PROBEEX_OFFSET UNITYSDK_OFFSET(0x2124960)
#define XIGNCODE3INTERFACE_GET_WASINITALIZED_OFFSET UNITYSDK_OFFSET(0x2124980)
#define XIGNCODE3INTERFACE_SETUSERINFO_OFFSET UNITYSDK_OFFSET(0x2124990)
#define XIGNCODE3INTERFACE_GET_USERINFO_OFFSET UNITYSDK_OFFSET(0x21249A0)
#define XIGNCODE3INTERFACE_AWAKE_OFFSET UNITYSDK_OFFSET(0x21249B0)
#define XIGNCODE3INTERFACE_SET_USERINFO_OFFSET UNITYSDK_OFFSET(0x2124A60)
#define XIGNCODE3INTERFACE_SET_WASINITALIZED_OFFSET UNITYSDK_OFFSET(0x2124A70)

	inline static constexpr unsigned int XIGNCODE3Interface_TypeDefinitionIndex = 3900;

	class XIGNCODE3Interface : public Modifier
	{
	public:
		Il2CppObject* _WasInitalized_k__BackingField; // 0x20
		::System::String* _UserInfo_k__BackingField; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XIGNCODE3INTERFACE_.CTOR_OFFSET))(nullptr);
		}

		::System::String* GetCookie2(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + XIGNCODE3INTERFACE_GETCOOKIE2_OFFSET))(str, nullptr);
		}

		::System::Void ProbeEx(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + XIGNCODE3INTERFACE_PROBEEX_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* get_WasInitalized()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + XIGNCODE3INTERFACE_GET_WASINITALIZED_OFFSET))(nullptr);
		}

		::System::Void SetUserInfo(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + XIGNCODE3INTERFACE_SETUSERINFO_OFFSET))(str, nullptr);
		}

		::System::String* get_UserInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + XIGNCODE3INTERFACE_GET_USERINFO_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XIGNCODE3INTERFACE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_UserInfo(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + XIGNCODE3INTERFACE_SET_USERINFO_OFFSET))(str, nullptr);
		}

		::System::Void set_WasInitalized(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + XIGNCODE3INTERFACE_SET_WASINITALIZED_OFFSET))(arg, nullptr);
		}

	};

