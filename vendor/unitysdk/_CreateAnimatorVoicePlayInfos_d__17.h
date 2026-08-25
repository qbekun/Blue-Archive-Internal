#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class AudioAnimatorExcel; }

#define <CREATEANIMATORVOICEPLAYINFOS>D__17_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D40370)
#define <CREATEANIMATORVOICEPLAYINFOS>D__17_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D40390)
#define <CREATEANIMATORVOICEPLAYINFOS>D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D403A0)
#define <CREATEANIMATORVOICEPLAYINFOS>D__17_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D40720)
#define <CREATEANIMATORVOICEPLAYINFOS>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1D40730)
#define <CREATEANIMATORVOICEPLAYINFOS>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D40780)

	inline static constexpr unsigned int <CreateAnimatorVoicePlayInfos>d__17_TypeDefinitionIndex = 20108;

	class <CreateAnimatorVoicePlayInfos>d__17 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Data::Excel::AudioAnimatorExcel* excel; // 0x20
		Il2CppObject* complete; // 0x30
		Il2CppObject* voiceExcels; // 0x38
		<>c__DisplayClass17_0* __8__1; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CREATEANIMATORVOICEPLAYINFOS>D__17_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEANIMATORVOICEPLAYINFOS>D__17_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEANIMATORVOICEPLAYINFOS>D__17_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEANIMATORVOICEPLAYINFOS>D__17_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEANIMATORVOICEPLAYINFOS>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEANIMATORVOICEPLAYINFOS>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

