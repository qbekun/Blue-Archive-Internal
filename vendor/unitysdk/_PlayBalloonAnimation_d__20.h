#pragma once
#include "unitysdk.h"

#define <PLAYBALLOONANIMATION>D__20_.CTOR_OFFSET UNITYSDK_OFFSET(0xBF2DF0)
#define <PLAYBALLOONANIMATION>D__20_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF59E0)
#define <PLAYBALLOONANIMATION>D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBF59F0)
#define <PLAYBALLOONANIMATION>D__20_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBF5E00)
#define <PLAYBALLOONANIMATION>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xBF5E10)
#define <PLAYBALLOONANIMATION>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBF5E60)

	inline static constexpr unsigned int <PlayBalloonAnimation>d__20_TypeDefinitionIndex = 8756;

	class <PlayBalloonAnimation>d__20 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		Il2CppObject* playList; // 0x20
		::System::Int64 _waitTerm_5__2; // 0x28
		::System::Int32 _aniIndex_5__3; // 0x30
		::System::DateTime* _prevAniStartTime_5__4; // 0x38
		::System::Int32 _balloonIndex_5__5; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYBALLOONANIMATION>D__20_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYBALLOONANIMATION>D__20_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYBALLOONANIMATION>D__20_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYBALLOONANIMATION>D__20_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYBALLOONANIMATION>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYBALLOONANIMATION>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

