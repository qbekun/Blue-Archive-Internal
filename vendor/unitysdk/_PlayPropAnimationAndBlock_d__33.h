#pragma once
#include "unitysdk.h"

class ConquestEventDisplayer;
namespace MX::Conquest::ConquestTileMapEvent { class ConquestDisplayInfo; }
class IPropAnimationVisual;

#define <PLAYPROPANIMATIONANDBLOCK>D__33_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BE17E0)
#define <PLAYPROPANIMATIONANDBLOCK>D__33_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BE1800)
#define <PLAYPROPANIMATIONANDBLOCK>D__33_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BE1810)
#define <PLAYPROPANIMATIONANDBLOCK>D__33_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BE1C50)
#define <PLAYPROPANIMATIONANDBLOCK>D__33_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1BE1C60)
#define <PLAYPROPANIMATIONANDBLOCK>D__33_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BE1CB0)

	inline static constexpr unsigned int <PlayPropAnimationAndBlock>d__33_TypeDefinitionIndex = 1507;

	class <PlayPropAnimationAndBlock>d__33 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		ConquestEventDisplayer* __4__this; // 0x20
		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* displayInfo; // 0x28
		IPropAnimationVisual* _visual_5__2; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYPROPANIMATIONANDBLOCK>D__33_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYPROPANIMATIONANDBLOCK>D__33_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYPROPANIMATIONANDBLOCK>D__33_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYPROPANIMATIONANDBLOCK>D__33_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYPROPANIMATIONANDBLOCK>D__33_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYPROPANIMATIONANDBLOCK>D__33_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

