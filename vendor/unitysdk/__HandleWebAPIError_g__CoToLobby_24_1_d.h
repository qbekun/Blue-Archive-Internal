#pragma once
#include "unitysdk.h"

#define <<HANDLEWEBAPIERROR>G__COTOLOBBY|24_1>D_.CTOR_OFFSET UNITYSDK_OFFSET(0xE26460)
#define <<HANDLEWEBAPIERROR>G__COTOLOBBY|24_1>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xE2AD80)
#define <<HANDLEWEBAPIERROR>G__COTOLOBBY|24_1>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE2AD90)
#define <<HANDLEWEBAPIERROR>G__COTOLOBBY|24_1>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE2AF30)
#define <<HANDLEWEBAPIERROR>G__COTOLOBBY|24_1>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xE2AF40)
#define <<HANDLEWEBAPIERROR>G__COTOLOBBY|24_1>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE2AF90)

	inline static constexpr unsigned int <<HandleWebAPIError>g__CoToLobby|24_1>d_TypeDefinitionIndex = 10412;

	class <<HandleWebAPIError>g__CoToLobby|24_1>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<HANDLEWEBAPIERROR>G__COTOLOBBY|24_1>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<HANDLEWEBAPIERROR>G__COTOLOBBY|24_1>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<HANDLEWEBAPIERROR>G__COTOLOBBY|24_1>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<HANDLEWEBAPIERROR>G__COTOLOBBY|24_1>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<HANDLEWEBAPIERROR>G__COTOLOBBY|24_1>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<HANDLEWEBAPIERROR>G__COTOLOBBY|24_1>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

