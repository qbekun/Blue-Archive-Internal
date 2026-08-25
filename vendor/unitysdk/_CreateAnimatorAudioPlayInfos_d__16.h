#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class AudioAnimatorExcel; }

#define <CREATEANIMATORAUDIOPLAYINFOS>D__16_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FEE0)
#define <CREATEANIMATORAUDIOPLAYINFOS>D__16_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D3FF00)
#define <CREATEANIMATORAUDIOPLAYINFOS>D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D3FF10)
#define <CREATEANIMATORAUDIOPLAYINFOS>D__16_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D40240)
#define <CREATEANIMATORAUDIOPLAYINFOS>D__16_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1D40250)
#define <CREATEANIMATORAUDIOPLAYINFOS>D__16_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D402A0)

	inline static constexpr unsigned int <CreateAnimatorAudioPlayInfos>d__16_TypeDefinitionIndex = 20106;

	class <CreateAnimatorAudioPlayInfos>d__16 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Data::Excel::AudioAnimatorExcel* excel; // 0x20
		Il2CppObject* complete; // 0x30
		<>c__DisplayClass16_0* __8__1; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CREATEANIMATORAUDIOPLAYINFOS>D__16_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEANIMATORAUDIOPLAYINFOS>D__16_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEANIMATORAUDIOPLAYINFOS>D__16_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEANIMATORAUDIOPLAYINFOS>D__16_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEANIMATORAUDIOPLAYINFOS>D__16_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEANIMATORAUDIOPLAYINFOS>D__16_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

