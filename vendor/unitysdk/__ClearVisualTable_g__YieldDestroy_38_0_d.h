#pragma once
#include "unitysdk.h"

namespace FlatData { class FurnitureSubCategory; }
class CafeFurnitureLoader;
class <>c__DisplayClass38_0;
namespace UnityEngine { class GameObject; }

#define <<CLEARVISUALTABLE>G__YIELDDESTROY|38_0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x19BD440)
#define <<CLEARVISUALTABLE>G__YIELDDESTROY|38_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x19BE0B0)
#define <<CLEARVISUALTABLE>G__YIELDDESTROY|38_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19BE0C0)
#define <<CLEARVISUALTABLE>G__YIELDDESTROY|38_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19BE2C0)
#define <<CLEARVISUALTABLE>G__YIELDDESTROY|38_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x19BE2D0)
#define <<CLEARVISUALTABLE>G__YIELDDESTROY|38_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19BE320)

	inline static constexpr unsigned int <<ClearVisualTable>g__YieldDestroy|38_0>d_TypeDefinitionIndex = 1362;

	class <<ClearVisualTable>g__YieldDestroy|38_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::FlatData::FurnitureSubCategory* subCategory; // 0x20
		CafeFurnitureLoader* __4__this; // 0x28
		<>c__DisplayClass38_0* __8__1; // 0x30
		::UnityEngine::GameObject* go; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<CLEARVISUALTABLE>G__YIELDDESTROY|38_0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CLEARVISUALTABLE>G__YIELDDESTROY|38_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CLEARVISUALTABLE>G__YIELDDESTROY|38_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CLEARVISUALTABLE>G__YIELDDESTROY|38_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CLEARVISUALTABLE>G__YIELDDESTROY|38_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CLEARVISUALTABLE>G__YIELDDESTROY|38_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

