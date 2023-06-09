// instantaneous velocity of each wheel in radians per second
extern float velFL;
extern float velBL;
extern float velFR;
extern float velBR;

extern float old_heading;
extern float w;
extern float curr_k;
extern float V; // sum of the target wheel velocities
extern float R; // ratio of L/R wheel velocities

// filtered velocity of each wheel in radians per second
extern float filtVelFL;
extern float filtVelBL;
extern float filtVelFR;
extern float filtVelBR;

// scaling factor for each new reading
// if alpha = 0, each new reading is not even considered
// if alpha = 1, each new reading is the only thing considered
// lower values of alpha smooth the filtered velocity more, but delay the signal
extern float alpha;

// sum errors for integral term
extern float sumErrorFL;
extern float sumErrorBL;
extern float sumErrorFR;
extern float sumErrorBR;
extern float sumErrorK;
extern float maxSumError;

// desired velocity setpoints in rad/s
extern float desiredVelFL;
extern float desiredVelBL;
extern float desiredVelFR;
extern float desiredVelBR;

// voltage to send to the motors
extern float voltageFL;
extern float voltageBL;
extern float voltageFR;
extern float voltageBR;

// error reading
extern float errorFL;
extern float errorBL;
extern float errorFR;
extern float errorBR;
extern float errorK;
// PID Constants
extern float kp;
extern float ki;
extern float kd;

extern float kpK;
extern float kiK;
extern float kdK;

extern float lastRadFL;
extern float lastRadBL;
extern float lastRadFR;
extern float lastRadBR;

extern float dPhiFL;
extern float dPhiBL;
extern float dPhiFR;
extern float dPhiBR;

// function prototypes
void updateVelocity(float dt);
float runPID(float error, float last_error, float kp, float ki, float kd, float &sumError, float maxSumError, float loopTime);
