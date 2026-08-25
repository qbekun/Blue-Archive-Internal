#pragma once
#include "unitysdk.h"

class ConquestEventDisplayer;
namespace MX::Conquest::ConquestTileMapEvent { class ConquestDisplayInfo; }

#define <PLAYPROPANIMATIONHOLDANDPLAY>D__34_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BE1CC0)
#define <PLAYPROPANIMATIONHOLDANDPLAY>D__34_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BE1CE0)
#define <PLAYPROPANIMATIONHOLDANDPLAY>D__34_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BE1CF0)
#define <PLAYPROPANIMATIONHOLDANDPLAY>D__34_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BE1F10)
#define <PLAYPROPANIMATIONHOLDANDPLAY>D__34_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1BE1F20)
#define <PLAYPROPANIMATIONHOLDANDPLAY>D__34_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BE1F70)

	inline static constexpr unsigned int <PlayPropAnimationHoldAndPlay>d__34_TypeDefinitionIndex = 1508;

	class <PlayPropAnimationHoldAndPlay>d__34 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		ConquestEventDisplayer* __4__this; // 0x20
		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* displayInfo; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYPROPANIMATIONHOLDANDPLAY>D__34_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYPROPANIMATIONHOLDANDPLAY>D__34_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYPROPANIMATIONHOLDANDPLAY>D__34_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYPROPANIMATIONHOLDANDPLAY>D__34_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYPROPANIMATIONHOLDANDPLAY>D__34_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYPROPANIMATIONHOLDANDPLAY>D__34_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

