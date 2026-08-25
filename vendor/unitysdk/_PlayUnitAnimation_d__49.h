#pragma once
#include "unitysdk.h"

class ConquestTileMapVisual;
namespace UnityEngine { class WaitForSeconds; }
namespace MX::Core::Math { class IRandomService; }

#define <PLAYUNITANIMATION>D__49_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D07CC0)
#define <PLAYUNITANIMATION>D__49_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D07CE0)
#define <PLAYUNITANIMATION>D__49_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D07CF0)
#define <PLAYUNITANIMATION>D__49_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D08500)
#define <PLAYUNITANIMATION>D__49_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1D08510)
#define <PLAYUNITANIMATION>D__49_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D08560)

	inline static constexpr unsigned int <PlayUnitAnimation>d__49_TypeDefinitionIndex = 1569;

	class <PlayUnitAnimation>d__49 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		ConquestTileMapVisual* __4__this; // 0x20
		::System::Int32 _minCount_5__2; // 0x28
		::System::Int32 _maxCount_5__3; // 0x2C
		::UnityEngine::WaitForSeconds* _waitForSeconds_5__4; // 0x30
		::MX::Core::Math::IRandomService* _random_5__5; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYUNITANIMATION>D__49_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYUNITANIMATION>D__49_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYUNITANIMATION>D__49_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYUNITANIMATION>D__49_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYUNITANIMATION>D__49_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYUNITANIMATION>D__49_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

