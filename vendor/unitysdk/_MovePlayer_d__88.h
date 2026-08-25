#pragma once
#include "unitysdk.h"

class CampaignTask;
namespace MX::Campaign { class HexaUnit; }
namespace MX::Campaign { class HexLocation; }
class HexaUnitVisual;

#define <MOVEPLAYER>D__88_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FFD650)
#define <MOVEPLAYER>D__88_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x20041C0)
#define <MOVEPLAYER>D__88_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x20041D0)
#define <MOVEPLAYER>D__88_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2004860)
#define <MOVEPLAYER>D__88_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2004870)
#define <MOVEPLAYER>D__88_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20048C0)

	inline static constexpr unsigned int <MovePlayer>d__88_TypeDefinitionIndex = 3108;

	class <MovePlayer>d__88 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		CampaignTask* __4__this; // 0x20
		::MX::Campaign::HexaUnit* unit; // 0x28
		::MX::Campaign::HexLocation* destPosition; // 0x30
		::MX::Campaign::HexLocation* inputPosition; // 0x3C
		HexaUnitVisual* _visual_5__2; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <MOVEPLAYER>D__88_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOVEPLAYER>D__88_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOVEPLAYER>D__88_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOVEPLAYER>D__88_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOVEPLAYER>D__88_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOVEPLAYER>D__88_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

