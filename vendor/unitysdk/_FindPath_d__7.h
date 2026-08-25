#pragma once
#include "unitysdk.h"

namespace MX::Campaign { class HexLocation; }
namespace MX::TableBoard { class TBGHexaMapGraph; }

#define <FINDPATH>D__7_.CTOR_OFFSET UNITYSDK_OFFSET(0xF08570)
#define <FINDPATH>D__7_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xF085A0)
#define <FINDPATH>D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xF085B0)
#define <FINDPATH>D__7_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.CAMPAIGN.HEXLOCATION_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF08F30)
#define <FINDPATH>D__7_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xF08F50)
#define <FINDPATH>D__7_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF08FA0)
#define <FINDPATH>D__7_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.CAMPAIGN.HEXLOCATION_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xF08FF0)
#define <FINDPATH>D__7_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xF090B0)

	inline static constexpr unsigned int <FindPath>d__7_TypeDefinitionIndex = 11204;

	class <FindPath>d__7 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::Campaign::HexLocation* __2__current; // 0x14
		::System::Int32 __l__initialThreadId; // 0x20
		::MX::Campaign::HexLocation* to; // 0x24
		::MX::Campaign::HexLocation* __3__to; // 0x30
		::MX::Campaign::HexLocation* from; // 0x3C
		::MX::Campaign::HexLocation* __3__from; // 0x48
		::MX::TableBoard::TBGHexaMapGraph* __4__this; // 0x58
		Il2CppObject* _cameFrom_5__2; // 0x60
		::MX::Campaign::HexLocation* _start_5__3; // 0x68
		::MX::Campaign::HexLocation* _pathfinder_5__4; // 0x74

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <FINDPATH>D__7_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDPATH>D__7_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDPATH>D__7_MOVENEXT_OFFSET))(nullptr);
		}

		::MX::Campaign::HexLocation* System.Collections.Generic.IEnumerator_MX.Campaign.HexLocation_.get_Current()
		{
			return ((::MX::Campaign::HexLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDPATH>D__7_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.CAMPAIGN.HEXLOCATION_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDPATH>D__7_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDPATH>D__7_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.Campaign.HexLocation_.GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDPATH>D__7_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.CAMPAIGN.HEXLOCATION_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDPATH>D__7_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

