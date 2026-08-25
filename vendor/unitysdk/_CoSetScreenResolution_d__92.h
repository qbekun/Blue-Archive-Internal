#pragma once
#include "unitysdk.h"

class GraphicsManager;
namespace MX::SaveData { class Resolution; }

#define <COSETSCREENRESOLUTION>D__92_.CTOR_OFFSET UNITYSDK_OFFSET(0x20C7DE0)
#define <COSETSCREENRESOLUTION>D__92_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x20CA8E0)
#define <COSETSCREENRESOLUTION>D__92_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x20CA8F0)
#define <COSETSCREENRESOLUTION>D__92_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20CB180)
#define <COSETSCREENRESOLUTION>D__92_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x20CB190)
#define <COSETSCREENRESOLUTION>D__92_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20CB1E0)

	inline static constexpr unsigned int <CoSetScreenResolution>d__92_TypeDefinitionIndex = 3675;

	class <CoSetScreenResolution>d__92 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		GraphicsManager* __4__this; // 0x20
		::MX::SaveData::Resolution* option; // 0x28
		::System::Int32 _targetWidth_5__2; // 0x2C
		::System::Int32 _targetHeight_5__3; // 0x30
		::System::Int32 _uiWidth_5__4; // 0x34
		::System::Int32 _uiHeight_5__5; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COSETSCREENRESOLUTION>D__92_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSETSCREENRESOLUTION>D__92_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSETSCREENRESOLUTION>D__92_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSETSCREENRESOLUTION>D__92_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSETSCREENRESOLUTION>D__92_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSETSCREENRESOLUTION>D__92_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

