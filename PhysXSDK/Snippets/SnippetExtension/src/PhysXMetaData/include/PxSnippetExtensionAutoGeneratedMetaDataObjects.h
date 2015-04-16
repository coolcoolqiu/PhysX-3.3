/*
 * Copyright (c) 2008-2015, NVIDIA CORPORATION.  All rights reserved.
 *
 * NVIDIA CORPORATION and its licensors retain all intellectual property
 * and proprietary rights in and to this software, related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA CORPORATION is strictly prohibited.
 */
// Copyright (c) 2004-2008 AGEIA Technologies, Inc. All rights reserved.
// Copyright (c) 2001-2004 NovodeX AG. All rights reserved.

// This code is auto-generated by the PhysX Clang metadata generator.  Do not edit or be
// prepared for your edits to be quietly ignored next time the clang metadata generator is
// run.  You can find the most recent version of clang metadata generator by contacting
// Chris Nuernberger <chrisn@nvidia.com> or Dilip or Adam.
// The source code for the generate was at one time checked into:
// physx/PhysXMetaDataGenerator/llvm/tools/clang/lib/Frontend/PhysXMetaDataAction.cpp
#define THERE_IS_NO_INCLUDE_GUARD_HERE_FOR_A_REASON

#define PX_PROPERTY_INFO_NAME PxSnippetExtensionPropertyInfoName
	class CustomPulleyJoint;
	struct CustomPulleyJointGeneratedValues
		: PxJointGeneratedValues	{
		PxReal Distance;
		PxReal Ratio;
		PxReal Stiffness;
		PxReal Damping;
		PxReal Tolerance;
		const char * ConcreteTypeName;
		  CustomPulleyJointGeneratedValues( const CustomPulleyJoint* inSource );
	};
	DEFINE_PROPERTY_TO_VALUE_STRUCT_MAP( CustomPulleyJoint, Distance, CustomPulleyJointGeneratedValues)
	DEFINE_PROPERTY_TO_VALUE_STRUCT_MAP( CustomPulleyJoint, Ratio, CustomPulleyJointGeneratedValues)
	DEFINE_PROPERTY_TO_VALUE_STRUCT_MAP( CustomPulleyJoint, Stiffness, CustomPulleyJointGeneratedValues)
	DEFINE_PROPERTY_TO_VALUE_STRUCT_MAP( CustomPulleyJoint, Damping, CustomPulleyJointGeneratedValues)
	DEFINE_PROPERTY_TO_VALUE_STRUCT_MAP( CustomPulleyJoint, Tolerance, CustomPulleyJointGeneratedValues)
	DEFINE_PROPERTY_TO_VALUE_STRUCT_MAP( CustomPulleyJoint, ConcreteTypeName, CustomPulleyJointGeneratedValues)
	struct CustomPulleyJointGeneratedInfo
		: PxJointGeneratedInfo
	{
		static const char* getClassName() { return "CustomPulleyJoint"; }
		PxPropertyInfo<PX_PROPERTY_INFO_NAME::CustomPulleyJoint_Distance, CustomPulleyJoint, PxReal, PxReal > Distance;
		PxPropertyInfo<PX_PROPERTY_INFO_NAME::CustomPulleyJoint_Ratio, CustomPulleyJoint, PxReal, PxReal > Ratio;
		PxPropertyInfo<PX_PROPERTY_INFO_NAME::CustomPulleyJoint_Stiffness, CustomPulleyJoint, PxReal, PxReal > Stiffness;
		PxPropertyInfo<PX_PROPERTY_INFO_NAME::CustomPulleyJoint_Damping, CustomPulleyJoint, PxReal, PxReal > Damping;
		PxPropertyInfo<PX_PROPERTY_INFO_NAME::CustomPulleyJoint_Tolerance, CustomPulleyJoint, PxReal, PxReal > Tolerance;
		PxReadOnlyPropertyInfo<PX_PROPERTY_INFO_NAME::CustomPulleyJoint_ConcreteTypeName, CustomPulleyJoint, const char * > ConcreteTypeName;

		 CustomPulleyJointGeneratedInfo();
		template<typename TReturnType, typename TOperator>
		TReturnType visitType( TOperator inOperator ) const
		{
			return inOperator( (CustomPulleyJoint*)NULL );
		}
		template<typename TOperator>
		void visitBases( TOperator inOperator )
		{
			PX_UNUSED(inOperator);
			inOperator( *static_cast<PxJointGeneratedInfo*>( this ) );
		}
		template<typename TOperator>
		PxU32 visitBaseProperties( TOperator inOperator, PxU32 inStartIndex = 0 ) const
		{
			PX_UNUSED(inOperator);
			PX_UNUSED(inStartIndex);
			inStartIndex = PxJointGeneratedInfo::visitBaseProperties( inOperator, inStartIndex );
			inStartIndex = PxJointGeneratedInfo::visitInstanceProperties( inOperator, inStartIndex );
			return inStartIndex;
		}
		static PxU32 instancePropertyCount() { return 6; }
		static PxU32 totalPropertyCount() { return instancePropertyCount()
				+ PxJointGeneratedInfo::totalPropertyCount(); }
		template<typename TOperator>
		PxU32 visitInstanceProperties( TOperator inOperator, PxU32 inStartIndex = 0 ) const
		{
			PX_UNUSED(inOperator);
			PX_UNUSED(inStartIndex);
			inOperator( Distance, inStartIndex + 0 );; 
			inOperator( Ratio, inStartIndex + 1 );; 
			inOperator( Stiffness, inStartIndex + 2 );; 
			inOperator( Damping, inStartIndex + 3 );; 
			inOperator( Tolerance, inStartIndex + 4 );; 
			inOperator( ConcreteTypeName, inStartIndex + 5 );; 
			return 6 + inStartIndex;
		}
	};
	template<> struct PxClassInfoTraits<CustomPulleyJoint>
	{ 
		CustomPulleyJointGeneratedInfo Info;
		const CustomPulleyJointGeneratedInfo* getInfo() { return &Info; }
	};



#undef THERE_IS_NO_INCLUDE_GUARD_HERE_FOR_A_REASON
#undef PX_PROPERTY_INFO_NAME