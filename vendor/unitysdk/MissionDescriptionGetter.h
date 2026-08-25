#pragma once
#include "unitysdk.h"

class MissionContentBase;
namespace MX::Data { class MissionInfo; }

#define MISSIONDESCRIPTIONGETTER_GET_OFFSET UNITYSDK_OFFSET(0x1E58100)
#define MISSIONDESCRIPTIONGETTER_GENERATEDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1E5C290)

	inline static constexpr unsigned int MissionDescriptionGetter_TypeDefinitionIndex = 1721;

	class MissionDescriptionGetter : public Il2CppObject
	{
	public:
		::System::String* Get(MissionContentBase* arg, ::MX::Data::MissionInfo* arg2)
		{
			return ((::System::String*(*)(MissionContentBase*, ::MX::Data::MissionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONDESCRIPTIONGETTER_GET_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* GenerateDescription(::MX::Data::MissionInfo* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2, ::System::Boolean arg3)
		{
			return ((::System::String*(*)(::MX::Data::MissionInfo*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONDESCRIPTIONGETTER_GENERATEDESCRIPTION_OFFSET))(arg, str, arg2, arg3, nullptr);
		}

	};

