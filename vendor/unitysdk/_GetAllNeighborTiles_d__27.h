#pragma once
#include "unitysdk.h"

namespace MX::TableBoard { class TBGHexaTileData; }
namespace MX::Campaign { class HexLocation; }

#define <GETALLNEIGHBORTILES>D__27_.CTOR_OFFSET UNITYSDK_OFFSET(0xF061A0)
#define <GETALLNEIGHBORTILES>D__27_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xF07FC0)
#define <GETALLNEIGHBORTILES>D__27_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xF07FD0)
#define <GETALLNEIGHBORTILES>D__27_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.TABLEBOARD.TBGHEXATILEDATA_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF081B0)
#define <GETALLNEIGHBORTILES>D__27_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xF081C0)
#define <GETALLNEIGHBORTILES>D__27_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF08210)
#define <GETALLNEIGHBORTILES>D__27_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.TABLEBOARD.TBGHEXATILEDATA_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xF08220)
#define <GETALLNEIGHBORTILES>D__27_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xF082D0)

	inline static constexpr unsigned int <GetAllNeighborTiles>d__27_TypeDefinitionIndex = 11199;

	class <GetAllNeighborTiles>d__27 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::TableBoard::TBGHexaTileData* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		Il2CppObject* tileDataMap; // 0x28
		Il2CppObject* __3__tileDataMap; // 0x30
		::MX::Campaign::HexLocation* location; // 0x38
		::MX::Campaign::HexLocation* __3__location; // 0x44
		::System::Int32 _i_5__2; // 0x50

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETALLNEIGHBORTILES>D__27_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLNEIGHBORTILES>D__27_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLNEIGHBORTILES>D__27_MOVENEXT_OFFSET))(nullptr);
		}

		::MX::TableBoard::TBGHexaTileData* System.Collections.Generic.IEnumerator_MX.TableBoard.TBGHexaTileData_.get_Current()
		{
			return ((::MX::TableBoard::TBGHexaTileData*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLNEIGHBORTILES>D__27_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.TABLEBOARD.TBGHEXATILEDATA_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLNEIGHBORTILES>D__27_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLNEIGHBORTILES>D__27_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.TableBoard.TBGHexaTileData_.GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLNEIGHBORTILES>D__27_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.TABLEBOARD.TBGHEXATILEDATA_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLNEIGHBORTILES>D__27_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

