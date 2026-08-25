#pragma once
#include "unitysdk.h"

class ObjectActivator;
class UILabel;
namespace MX::Data { class MissionInfo; }

#define CHALLENGEMISSIONITEM_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x26FC7F0)
#define CHALLENGEMISSIONITEM_FILLDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x26FCA60)
#define CHALLENGEMISSIONITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x26FCBF0)
#define CHALLENGEMISSIONITEM_REFRESH_OFFSET UNITYSDK_OFFSET(0x26FCC00)

	inline static constexpr unsigned int ChallengeMissionItem_TypeDefinitionIndex = 7054;

	class ChallengeMissionItem : public Il2CppObject
	{
	public:
		ObjectActivator* clearIcon; // 0x18
		UILabel* descriptionLabel; // 0x20

		::System::Boolean IsComplete(::MX::Data::MissionInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::MissionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CHALLENGEMISSIONITEM_ISCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void FillDescription(::MX::Data::MissionInfo* arg)
		{
			((::System::Void(*)(::MX::Data::MissionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CHALLENGEMISSIONITEM_FILLDESCRIPTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHALLENGEMISSIONITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Refresh(::MX::Data::MissionInfo* arg)
		{
			((::System::Void(*)(::MX::Data::MissionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CHALLENGEMISSIONITEM_REFRESH_OFFSET))(arg, nullptr);
		}

	};

