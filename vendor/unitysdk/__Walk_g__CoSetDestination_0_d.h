#pragma once
#include "unitysdk.h"

class <>c__DisplayClass93_0;
namespace UnityEngine { class Vector3; }

#define <<WALK>G__COSETDESTINATION|0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x19B17D0)
#define <<WALK>G__COSETDESTINATION|0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x19B17F0)
#define <<WALK>G__COSETDESTINATION|0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19B1800)
#define <<WALK>G__COSETDESTINATION|0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19B1DE0)
#define <<WALK>G__COSETDESTINATION|0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x19B1DF0)
#define <<WALK>G__COSETDESTINATION|0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19B1E40)

	inline static constexpr unsigned int <<Walk>g__CoSetDestination|0>d_TypeDefinitionIndex = 1333;

	class <<Walk>g__CoSetDestination|0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		<>c__DisplayClass93_0* __4__this; // 0x20
		::UnityEngine::Vector3* target; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<WALK>G__COSETDESTINATION|0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<WALK>G__COSETDESTINATION|0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<WALK>G__COSETDESTINATION|0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<WALK>G__COSETDESTINATION|0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<WALK>G__COSETDESTINATION|0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<WALK>G__COSETDESTINATION|0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

