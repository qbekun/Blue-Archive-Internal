#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class VoiceLogicEffectExcel; }

#define <CREATELOGICEFFECTVOICETABLE>D__27_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D424A0)
#define <CREATELOGICEFFECTVOICETABLE>D__27_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D424C0)
#define <CREATELOGICEFFECTVOICETABLE>D__27_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D42580)
#define <CREATELOGICEFFECTVOICETABLE>D__27___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1D42EA0)
#define <CREATELOGICEFFECTVOICETABLE>D__27_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D42F50)
#define <CREATELOGICEFFECTVOICETABLE>D__27_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1D42F60)
#define <CREATELOGICEFFECTVOICETABLE>D__27_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D42FB0)

	inline static constexpr unsigned int <CreateLogicEffectVoiceTable>d__27_TypeDefinitionIndex = 20123;

	class <CreateLogicEffectVoiceTable>d__27 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Boolean self; // 0x20
		Il2CppObject* loginEffectVoiceExcels; // 0x28
		Il2CppObject* characterVoiceExcels; // 0x30
		Il2CppObject* complete; // 0x38
		<>c__DisplayClass27_1* __8__1; // 0x40
		Il2CppObject* _table_5__2; // 0x48
		Il2CppObject* __7__wrap2; // 0x50
		::MX::Data::Excel::VoiceLogicEffectExcel* _aniVoice_5__4; // 0x58

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CREATELOGICEFFECTVOICETABLE>D__27_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATELOGICEFFECTVOICETABLE>D__27_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATELOGICEFFECTVOICETABLE>D__27_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATELOGICEFFECTVOICETABLE>D__27___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATELOGICEFFECTVOICETABLE>D__27_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATELOGICEFFECTVOICETABLE>D__27_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATELOGICEFFECTVOICETABLE>D__27_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

