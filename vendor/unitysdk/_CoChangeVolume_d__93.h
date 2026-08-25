#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AudioSource; }

#define <COCHANGEVOLUME>D__93_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D57AA0)
#define <COCHANGEVOLUME>D__93_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D57AC0)
#define <COCHANGEVOLUME>D__93_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D57AD0)
#define <COCHANGEVOLUME>D__93_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D57D20)
#define <COCHANGEVOLUME>D__93_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1D57D30)
#define <COCHANGEVOLUME>D__93_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D57D80)

	inline static constexpr unsigned int <CoChangeVolume>d__93_TypeDefinitionIndex = 20205;

	class <CoChangeVolume>d__93 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::AudioSource* source; // 0x20
		::System::Single to; // 0x28
		::System::Single from; // 0x2C
		::System::Single duration; // 0x30
		::System::Single _elapsed_5__2; // 0x34

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COCHANGEVOLUME>D__93_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCHANGEVOLUME>D__93_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCHANGEVOLUME>D__93_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCHANGEVOLUME>D__93_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCHANGEVOLUME>D__93_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCHANGEVOLUME>D__93_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

