#pragma once
#include "unitysdk.h"

class ShaderBaseAnimationData;

#define <COPLAY>D__6_.CTOR_OFFSET UNITYSDK_OFFSET(0x20DA6C0)
#define <COPLAY>D__6_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x20DA700)
#define <COPLAY>D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x20DA710)
#define <COPLAY>D__6_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20DABF0)
#define <COPLAY>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x20DAC00)
#define <COPLAY>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20DAC50)

	inline static constexpr unsigned int <CoPlay>d__6_TypeDefinitionIndex = 3741;

	class <CoPlay>d__6 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::Il2CppArray<::System::Object*>* mats; // 0x20
		ShaderBaseAnimationData* __4__this; // 0x28
		::System::Action* onStart; // 0x30
		::System::Action* onFinish; // 0x38
		::System::Boolean _useKeyword_5__2; // 0x40
		::System::Single _elapsedTime_5__3; // 0x44

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAY>D__6_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAY>D__6_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAY>D__6_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAY>D__6_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAY>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAY>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

