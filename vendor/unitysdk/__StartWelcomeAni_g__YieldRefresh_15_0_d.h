#pragma once
#include "unitysdk.h"

class UILobbyWelcomeCampaignButton;

#define <<STARTWELCOMEANI>G__YIELDREFRESH|15_0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x2679D30)
#define <<STARTWELCOMEANI>G__YIELDREFRESH|15_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x267A490)
#define <<STARTWELCOMEANI>G__YIELDREFRESH|15_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x267A4A0)
#define <<STARTWELCOMEANI>G__YIELDREFRESH|15_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x267A550)
#define <<STARTWELCOMEANI>G__YIELDREFRESH|15_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x267A560)
#define <<STARTWELCOMEANI>G__YIELDREFRESH|15_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x267A5B0)

	inline static constexpr unsigned int <<StartWelcomeAni>g__YieldRefresh|15_0>d_TypeDefinitionIndex = 6725;

	class <<StartWelcomeAni>g__YieldRefresh|15_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Single delta; // 0x20
		UILobbyWelcomeCampaignButton* __4__this; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<STARTWELCOMEANI>G__YIELDREFRESH|15_0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<STARTWELCOMEANI>G__YIELDREFRESH|15_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<STARTWELCOMEANI>G__YIELDREFRESH|15_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<STARTWELCOMEANI>G__YIELDREFRESH|15_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<STARTWELCOMEANI>G__YIELDREFRESH|15_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<STARTWELCOMEANI>G__YIELDREFRESH|15_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

