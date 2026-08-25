#pragma once
#include "unitysdk.h"

class AudioListenerManager;
class TransformInfo;

#define <COANIMATELISTENERLOCALTRANSFORM>D__23_.CTOR_OFFSET UNITYSDK_OFFSET(0x20AAF40)
#define <COANIMATELISTENERLOCALTRANSFORM>D__23_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x20AAFE0)
#define <COANIMATELISTENERLOCALTRANSFORM>D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x20AAFF0)
#define <COANIMATELISTENERLOCALTRANSFORM>D__23_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20AB200)
#define <COANIMATELISTENERLOCALTRANSFORM>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x20AB210)
#define <COANIMATELISTENERLOCALTRANSFORM>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20AB260)

	inline static constexpr unsigned int <CoAnimateListenerLocalTransform>d__23_TypeDefinitionIndex = 3547;

	class <CoAnimateListenerLocalTransform>d__23 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Single duration; // 0x20
		AudioListenerManager* __4__this; // 0x28
		TransformInfo* from; // 0x30
		TransformInfo* to; // 0x4C
		::System::Single _startTime_5__2; // 0x68

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COANIMATELISTENERLOCALTRANSFORM>D__23_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COANIMATELISTENERLOCALTRANSFORM>D__23_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COANIMATELISTENERLOCALTRANSFORM>D__23_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COANIMATELISTENERLOCALTRANSFORM>D__23_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COANIMATELISTENERLOCALTRANSFORM>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COANIMATELISTENERLOCALTRANSFORM>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

