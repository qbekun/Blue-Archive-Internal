#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class ITreeViewItem; }

#define <GETALLITEMS>D__64_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3CC7C0)
#define <GETALLITEMS>D__64_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3CFBE0)
#define <GETALLITEMS>D__64_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA3CFBF0)
#define <GETALLITEMS>D__64_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_UNITYENGINE.UIELEMENTS.ITREEVIEWITEM_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA3D0040)
#define <GETALLITEMS>D__64_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xA3D0050)
#define <GETALLITEMS>D__64_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA3D00A0)
#define <GETALLITEMS>D__64_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_UNITYENGINE.UIELEMENTS.ITREEVIEWITEM_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA3D00B0)
#define <GETALLITEMS>D__64_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA3D0170)

	inline static constexpr unsigned int <GetAllItems>d__64_TypeDefinitionIndex = 30416;

	class <GetAllItems>d__64 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::UnityEngine::UIElements::ITreeViewItem* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		Il2CppObject* rootItems; // 0x28
		Il2CppObject* __3__rootItems; // 0x30
		Il2CppObject* _iteratorStack_5__1; // 0x38
		Il2CppObject* _currentIterator_5__2; // 0x40
		::System::Boolean _hasNext_5__3; // 0x48
		::UnityEngine::UIElements::ITreeViewItem* _currentItem_5__4; // 0x50

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETALLITEMS>D__64_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLITEMS>D__64_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLITEMS>D__64_MOVENEXT_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::ITreeViewItem* System.Collections.Generic.IEnumerator_UnityEngine.UIElements.ITreeViewItem_.get_Current()
		{
			return (return (::UnityEngine::UIElements::ITreeViewItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLITEMS>D__64_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_UNITYENGINE.UIELEMENTS.ITREEVIEWITEM_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLITEMS>D__64_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLITEMS>D__64_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_UnityEngine.UIElements.ITreeViewItem_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLITEMS>D__64_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_UNITYENGINE.UIELEMENTS.ITREEVIEWITEM_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLITEMS>D__64_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

