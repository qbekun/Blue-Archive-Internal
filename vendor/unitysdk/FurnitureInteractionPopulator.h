#pragma once
#include "unitysdk.h"

class CafeCharacterLoader;
class CafeFurnitureLoader;
namespace MX::Core::Math { class IRandomService; }
class FurnitureTimelineType;
class FurnitureVisual;

#define FURNITUREINTERACTIONPOPULATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AC78F0)
#define FURNITUREINTERACTIONPOPULATOR_ATTACHCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1AC7960)
#define FURNITUREINTERACTIONPOPULATOR_DETACHCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1AC86D0)
#define FURNITUREINTERACTIONPOPULATOR_SETLOADERS_OFFSET UNITYSDK_OFFSET(0x1AC8700)
#define FURNITUREINTERACTIONPOPULATOR_POPULATEOTHERTYPE_OFFSET UNITYSDK_OFFSET(0x1AC8740)
#define FURNITUREINTERACTIONPOPULATOR_GETPOPULATEDDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1AC79D0)
#define FURNITUREINTERACTIONPOPULATOR_GET_RANDOM_OFFSET UNITYSDK_OFFSET(0x1ACA000)
#define FURNITUREINTERACTIONPOPULATOR_TRYPOPULATEREQUIREDTYPE_OFFSET UNITYSDK_OFFSET(0x1AC9270)
#define FURNITUREINTERACTIONPOPULATOR_ATTACHCHARACTERSBYFURNITUREID_OFFSET UNITYSDK_OFFSET(0x1ACA030)

	inline static constexpr unsigned int FurnitureInteractionPopulator_TypeDefinitionIndex = 1408;

	class FurnitureInteractionPopulator : public Il2CppObject
	{
	public:
		CafeCharacterLoader* characterLoader; // 0x18
		CafeFurnitureLoader* furnitureLoader; // 0x20
		::MX::Core::Math::IRandomService* _random_k__BackingField; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREINTERACTIONPOPULATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AttachCharacters()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREINTERACTIONPOPULATOR_ATTACHCHARACTERS_OFFSET))(nullptr);
		}

		::System::Void DetachCharacters()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREINTERACTIONPOPULATOR_DETACHCHARACTERS_OFFSET))(nullptr);
		}

		::System::Void SetLoaders(CafeCharacterLoader* arg, CafeFurnitureLoader* arg2)
		{
			((::System::Void(*)(CafeCharacterLoader*, CafeFurnitureLoader*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREINTERACTIONPOPULATOR_SETLOADERS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean PopulateOtherType(FurnitureTimelineType* arg, FurnitureVisual* arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject&* arg5)
		{
			return ((::System::Boolean(*)(FurnitureTimelineType*, FurnitureVisual*, Il2CppObject*, Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREINTERACTIONPOPULATOR_POPULATEOTHERTYPE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		Il2CppObject* GetPopulatedDictionary(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREINTERACTIONPOPULATOR_GETPOPULATEDDICTIONARY_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::Math::IRandomService* get_random()
		{
			return ((::MX::Core::Math::IRandomService*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREINTERACTIONPOPULATOR_GET_RANDOM_OFFSET))(nullptr);
		}

		::System::Boolean TryPopulateRequiredType(FurnitureVisual* arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject&* arg4)
		{
			return ((::System::Boolean(*)(FurnitureVisual*, Il2CppObject*, Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREINTERACTIONPOPULATOR_TRYPOPULATEREQUIREDTYPE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void AttachCharactersByFurnitureId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREINTERACTIONPOPULATOR_ATTACHCHARACTERSBYFURNITUREID_OFFSET))(arg, nullptr);
		}

	};

