#pragma once
#include "unitysdk.h"

namespace UnityEngine::Networking { class UnityWebRequest; }

#define <CO_LOADASYNCSCENARIOBGFORSTEAM>D__44_.CTOR_OFFSET UNITYSDK_OFFSET(0xDF5F10)
#define <CO_LOADASYNCSCENARIOBGFORSTEAM>D__44_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xDF8850)
#define <CO_LOADASYNCSCENARIOBGFORSTEAM>D__44_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDF8910)
#define <CO_LOADASYNCSCENARIOBGFORSTEAM>D__44___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xDF9210)
#define <CO_LOADASYNCSCENARIOBGFORSTEAM>D__44_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDF92C0)
#define <CO_LOADASYNCSCENARIOBGFORSTEAM>D__44_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xDF92D0)
#define <CO_LOADASYNCSCENARIOBGFORSTEAM>D__44_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDF9320)

	inline static constexpr unsigned int <co_LoadAsyncScenarioBGForSteam>d__44_TypeDefinitionIndex = 10185;

	class <co_LoadAsyncScenarioBGForSteam>d__44 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::String* key; // 0x20
		Il2CppObject* onComplete; // 0x28
		::Il2CppArray<::System::Object*>* _bytes_5__2; // 0x30
		::UnityEngine::Networking::UnityWebRequest* _uwr_5__3; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADASYNCSCENARIOBGFORSTEAM>D__44_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADASYNCSCENARIOBGFORSTEAM>D__44_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADASYNCSCENARIOBGFORSTEAM>D__44_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADASYNCSCENARIOBGFORSTEAM>D__44___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADASYNCSCENARIOBGFORSTEAM>D__44_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADASYNCSCENARIOBGFORSTEAM>D__44_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADASYNCSCENARIOBGFORSTEAM>D__44_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

