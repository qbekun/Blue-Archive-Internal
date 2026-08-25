#pragma once
#include "unitysdk.h"

namespace UnityEngine::Networking { class UnityWebRequest; }

#define <CO_LOADASYNCSCENARIOBG>D__42_.CTOR_OFFSET UNITYSDK_OFFSET(0xDF5FC0)
#define <CO_LOADASYNCSCENARIOBG>D__42_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xDF80D0)
#define <CO_LOADASYNCSCENARIOBG>D__42_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDF8190)
#define <CO_LOADASYNCSCENARIOBG>D__42___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xDF8730)
#define <CO_LOADASYNCSCENARIOBG>D__42_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDF87E0)
#define <CO_LOADASYNCSCENARIOBG>D__42_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xDF87F0)
#define <CO_LOADASYNCSCENARIOBG>D__42_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDF8840)

	inline static constexpr unsigned int <co_LoadAsyncScenarioBG>d__42_TypeDefinitionIndex = 10184;

	class <co_LoadAsyncScenarioBG>d__42 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::String* key; // 0x20
		Il2CppObject* onComplete; // 0x28
		::UnityEngine::Networking::UnityWebRequest* _uwr_5__2; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADASYNCSCENARIOBG>D__42_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADASYNCSCENARIOBG>D__42_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADASYNCSCENARIOBG>D__42_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADASYNCSCENARIOBG>D__42___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADASYNCSCENARIOBG>D__42_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADASYNCSCENARIOBG>D__42_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADASYNCSCENARIOBG>D__42_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

