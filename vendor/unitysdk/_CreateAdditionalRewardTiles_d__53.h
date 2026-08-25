#pragma once
#include "unitysdk.h"

class UIRoadPuzzle;

#define <CREATEADDITIONALREWARDTILES>D__53_.CTOR_OFFSET UNITYSDK_OFFSET(0x27C7FD0)
#define <CREATEADDITIONALREWARDTILES>D__53_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x27C7FF0)
#define <CREATEADDITIONALREWARDTILES>D__53_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x27C8000)
#define <CREATEADDITIONALREWARDTILES>D__53_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x27C8100)
#define <CREATEADDITIONALREWARDTILES>D__53_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x27C8110)
#define <CREATEADDITIONALREWARDTILES>D__53_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x27C8160)

	inline static constexpr unsigned int <CreateAdditionalRewardTiles>d__53_TypeDefinitionIndex = 7575;

	class <CreateAdditionalRewardTiles>d__53 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIRoadPuzzle* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CREATEADDITIONALREWARDTILES>D__53_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEADDITIONALREWARDTILES>D__53_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEADDITIONALREWARDTILES>D__53_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEADDITIONALREWARDTILES>D__53_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEADDITIONALREWARDTILES>D__53_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEADDITIONALREWARDTILES>D__53_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

