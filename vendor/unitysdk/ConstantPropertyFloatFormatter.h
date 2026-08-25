#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MXBehaviorTree { class ConstantPropertyFloat&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define CONSTANTPROPERTYFLOATFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x94335C0)
#define CONSTANTPROPERTYFLOATFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9433610)
#define CONSTANTPROPERTYFLOATFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9433180)

	inline static constexpr unsigned int ConstantPropertyFloatFormatter_TypeDefinitionIndex = 36828;

	class ConstantPropertyFloatFormatter : public ::System::Globalization::CalendarData
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::ConstantPropertyFloat&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::ConstantPropertyFloat&*, ::PVOID))((::PBYTE)hIl2Cpp + CONSTANTPROPERTYFLOATFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::ConstantPropertyFloat&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::ConstantPropertyFloat&*, ::PVOID))((::PBYTE)hIl2Cpp + CONSTANTPROPERTYFLOATFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTANTPROPERTYFLOATFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

