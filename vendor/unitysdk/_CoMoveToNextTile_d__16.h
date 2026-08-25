#pragma once
#include "unitysdk.h"

class TBGTileMapVisual;
namespace MX::Campaign { class HexLocation; }
class TBGUnitVisual;
namespace UnityEngine { class Vector3; }

#define <COMOVETONEXTTILE>D__16_.CTOR_OFFSET UNITYSDK_OFFSET(0x20954B0)
#define <COMOVETONEXTTILE>D__16_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2095DF0)
#define <COMOVETONEXTTILE>D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2095E00)
#define <COMOVETONEXTTILE>D__16_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2096270)
#define <COMOVETONEXTTILE>D__16_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2096280)
#define <COMOVETONEXTTILE>D__16_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20962D0)

	inline static constexpr unsigned int <CoMoveToNextTile>d__16_TypeDefinitionIndex = 3505;

	class <CoMoveToNextTile>d__16 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		TBGTileMapVisual* map; // 0x20
		::MX::Campaign::HexLocation* from; // 0x28
		::MX::Campaign::HexLocation* to; // 0x34
		TBGUnitVisual* __4__this; // 0x40
		::System::Single _t_5__2; // 0x48
		::UnityEngine::Vector3* _startPosition_5__3; // 0x4C
		::UnityEngine::Vector3* _endPosition_5__4; // 0x58

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COMOVETONEXTTILE>D__16_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVETONEXTTILE>D__16_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVETONEXTTILE>D__16_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVETONEXTTILE>D__16_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVETONEXTTILE>D__16_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVETONEXTTILE>D__16_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

