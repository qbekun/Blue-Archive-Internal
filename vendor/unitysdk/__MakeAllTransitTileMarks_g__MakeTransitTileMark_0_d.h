#pragma once
#include "unitysdk.h"

class <>c__DisplayClass23_0;
class RoadPuzzleMapTileVisual;

#define <<MAKEALLTRANSITTILEMARKS>G__MAKETRANSITTILEMARK|0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x208A680)
#define <<MAKEALLTRANSITTILEMARKS>G__MAKETRANSITTILEMARK|0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x208A6A0)
#define <<MAKEALLTRANSITTILEMARKS>G__MAKETRANSITTILEMARK|0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x208A6B0)
#define <<MAKEALLTRANSITTILEMARKS>G__MAKETRANSITTILEMARK|0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x208A9E0)
#define <<MAKEALLTRANSITTILEMARKS>G__MAKETRANSITTILEMARK|0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x208A9F0)
#define <<MAKEALLTRANSITTILEMARKS>G__MAKETRANSITTILEMARK|0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x208AA40)

	inline static constexpr unsigned int <<MakeAllTransitTileMarks>g__MakeTransitTileMark|0>d_TypeDefinitionIndex = 3458;

	class <<MakeAllTransitTileMarks>g__MakeTransitTileMark|0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		<>c__DisplayClass23_0* __4__this; // 0x20
		RoadPuzzleMapTileVisual* tile; // 0x28
		Il2CppObject* _makeRewardCoroutine_5__2; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<MAKEALLTRANSITTILEMARKS>G__MAKETRANSITTILEMARK|0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<MAKEALLTRANSITTILEMARKS>G__MAKETRANSITTILEMARK|0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<MAKEALLTRANSITTILEMARKS>G__MAKETRANSITTILEMARK|0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<MAKEALLTRANSITTILEMARKS>G__MAKETRANSITTILEMARK|0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<MAKEALLTRANSITTILEMARKS>G__MAKETRANSITTILEMARK|0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<MAKEALLTRANSITTILEMARKS>G__MAKETRANSITTILEMARK|0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

