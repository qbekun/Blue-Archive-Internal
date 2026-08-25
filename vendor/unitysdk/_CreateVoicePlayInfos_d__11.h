#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class MiniGameAudioAnimatorExcel; }
class <>c__DisplayClass11_0;

#define <CREATEVOICEPLAYINFOS>D__11_.CTOR_OFFSET UNITYSDK_OFFSET(0x1464E70)
#define <CREATEVOICEPLAYINFOS>D__11_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1466770)
#define <CREATEVOICEPLAYINFOS>D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1466780)
#define <CREATEVOICEPLAYINFOS>D__11_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1466B80)
#define <CREATEVOICEPLAYINFOS>D__11_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1466B90)
#define <CREATEVOICEPLAYINFOS>D__11_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1466BE0)

	inline static constexpr unsigned int <CreateVoicePlayInfos>d__11_TypeDefinitionIndex = 15096;

	class <CreateVoicePlayInfos>d__11 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		Il2CppObject* voiceExcels; // 0x20
		Il2CppObject* complete; // 0x28
		::MX::Data::Excel::MiniGameAudioAnimatorExcel* excel; // 0x30
		<>c__DisplayClass11_0* __8__1; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CREATEVOICEPLAYINFOS>D__11_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEVOICEPLAYINFOS>D__11_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEVOICEPLAYINFOS>D__11_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEVOICEPLAYINFOS>D__11_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEVOICEPLAYINFOS>D__11_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEVOICEPLAYINFOS>D__11_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

