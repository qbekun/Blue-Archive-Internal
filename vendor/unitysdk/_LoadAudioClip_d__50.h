#pragma once
#include "unitysdk.h"

namespace MX::Audio { class BGMPlayer; }
namespace MX::Data { class BGMPlayInfo; }

#define <LOADAUDIOCLIP>D__50_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E790)
#define <LOADAUDIOCLIP>D__50_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D4FE50)
#define <LOADAUDIOCLIP>D__50_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D4FE60)
#define <LOADAUDIOCLIP>D__50_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D50090)
#define <LOADAUDIOCLIP>D__50_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1D500A0)
#define <LOADAUDIOCLIP>D__50_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D500F0)

	inline static constexpr unsigned int <LoadAudioClip>d__50_TypeDefinitionIndex = 20184;

	class <LoadAudioClip>d__50 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::Il2CppArray<::System::Object*>* clips; // 0x20
		::MX::Audio::BGMPlayer* __4__this; // 0x28
		::MX::Data::BGMPlayInfo* playInfo; // 0x30
		<>c__DisplayClass50_0* __8__1; // 0x38
		::System::Int32 _count_5__2; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <LOADAUDIOCLIP>D__50_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADAUDIOCLIP>D__50_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADAUDIOCLIP>D__50_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADAUDIOCLIP>D__50_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADAUDIOCLIP>D__50_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADAUDIOCLIP>D__50_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

