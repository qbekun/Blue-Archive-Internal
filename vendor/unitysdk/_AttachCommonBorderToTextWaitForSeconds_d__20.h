#pragma once
#include "unitysdk.h"

namespace NPA::Editor { class NXPSelectionGroupElement; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine { class GameObject; }

#define <ATTACHCOMMONBORDERTOTEXTWAITFORSECONDS>D__20_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D9C700)
#define <ATTACHCOMMONBORDERTOTEXTWAITFORSECONDS>D__20_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9D9E5F0)
#define <ATTACHCOMMONBORDERTOTEXTWAITFORSECONDS>D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9D9E600)
#define <ATTACHCOMMONBORDERTOTEXTWAITFORSECONDS>D__20_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9D9E6C0)
#define <ATTACHCOMMONBORDERTOTEXTWAITFORSECONDS>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9D9E6D0)
#define <ATTACHCOMMONBORDERTOTEXTWAITFORSECONDS>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9D9E720)

	inline static constexpr unsigned int <AttachCommonBorderToTextWaitForSeconds>d__20_TypeDefinitionIndex = 26337;

	class <AttachCommonBorderToTextWaitForSeconds>d__20 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Single delayTime; // 0x20
		::NPA::Editor::NXPSelectionGroupElement* __4__this; // 0x28
		::UnityEngine::UI::Image* borderImage; // 0x30
		::UnityEngine::GameObject* parentObj; // 0x38
		::UnityEngine::GameObject* textObj; // 0x40
		Il2CppObject* resultCallback; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <ATTACHCOMMONBORDERTOTEXTWAITFORSECONDS>D__20_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ATTACHCOMMONBORDERTOTEXTWAITFORSECONDS>D__20_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <ATTACHCOMMONBORDERTOTEXTWAITFORSECONDS>D__20_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ATTACHCOMMONBORDERTOTEXTWAITFORSECONDS>D__20_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ATTACHCOMMONBORDERTOTEXTWAITFORSECONDS>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ATTACHCOMMONBORDERTOTEXTWAITFORSECONDS>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

