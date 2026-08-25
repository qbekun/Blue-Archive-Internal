#pragma once
#include "unitysdk.h"

namespace FlatData { class Nation; }
class SpineCharacter;

#define LIPSYNCDATAREPOSITORY_ADDLIPSYNCOVERRIDE_OFFSET UNITYSDK_OFFSET(0x20DCF60)
#define LIPSYNCDATAREPOSITORY_TRYGETMOUTHSEGMENTKEYFRAMES_OFFSET UNITYSDK_OFFSET(0x20DD070)
#define LIPSYNCDATAREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x20DD220)
#define LIPSYNCDATAREPOSITORY_LOADCALLNAMELIPSYNC_OFFSET UNITYSDK_OFFSET(0x20DD2C0)
#define LIPSYNCDATAREPOSITORY_TRYPLAYLIPSYNC_OFFSET UNITYSDK_OFFSET(0x20DD400)

	inline static constexpr unsigned int LipsyncDataRepository_TypeDefinitionIndex = 3758;

	class LipsyncDataRepository : public Il2CppObject
	{
	public:
		Il2CppObject* excelSelector; // 0x10
		Il2CppObject* lipsyncOverride; // 0x18

		::System::Void AddLipsyncOverride(::System::UInt32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::UInt32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LIPSYNCDATAREPOSITORY_ADDLIPSYNCOVERRIDE_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean TryGetMouthSegmentKeyFrames(::System::UInt32 arg, ::FlatData::Nation* arg2, Il2CppObject&* arg3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::FlatData::Nation*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + LIPSYNCDATAREPOSITORY_TRYGETMOUTHSEGMENTKEYFRAMES_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LIPSYNCDATAREPOSITORY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void LoadCallNameLipsync()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPSYNCDATAREPOSITORY_LOADCALLNAMELIPSYNC_OFFSET))(nullptr);
		}

		::System::Boolean TryPlayLipsync(::System::String* str, ::System::UInt32 arg, ::FlatData::Nation* arg2, SpineCharacter* arg3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::UInt32, ::FlatData::Nation*, SpineCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + LIPSYNCDATAREPOSITORY_TRYPLAYLIPSYNC_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

	};

